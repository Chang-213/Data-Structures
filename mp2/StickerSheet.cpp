#include "StickerSheet.h"
#include "Image.h"
#include "cs225/PNG.h"
using cs225::PNG;


StickerSheet::StickerSheet(const Image &picture, unsigned max){
basepic = new Image(picture);
limit = max;
sarray  = new Image*[max];
xco = new unsigned[max];
yco = new unsigned[max];
for(unsigned x = 0; x < max; x++){
  sarray[x] = NULL;
}
}

void StickerSheet::destroy(){
  delete[] sarray;
  sarray = NULL;
  delete[] xco;
  xco = NULL;
  delete[] yco;
  yco = NULL;
  delete basepic;
  basepic = NULL;

}

StickerSheet::~StickerSheet(){
destroy();

}



StickerSheet::StickerSheet(const StickerSheet &other){
limit = other.limit;
sarray = new Image*[limit];
xco = new unsigned[limit];
yco = new unsigned[limit];
  for(unsigned i = 0; i < limit; i++){
    sarray[i] = other.sarray[i];
    xco[i] = other.xco[i];
    yco[i] = other.yco[i];
  }
 basepic = new Image(*(other.basepic));


}

const StickerSheet & StickerSheet::operator=(const StickerSheet &other){
  limit = other.limit;
  sarray = new Image*[limit];
  xco = new unsigned[limit];
  yco = new unsigned[limit];
    for(unsigned i = 0; i < limit; i++){
      sarray[i] = other.sarray[i];
      xco[i] = other.xco[i];
      yco[i] = other.yco[i];
    }
   basepic = new Image(*(other.basepic));

 return *this;
}

void StickerSheet::changeMaxStickers(unsigned max){

  Image** decoy = new Image*[max];
  unsigned* xdec = new unsigned[max];
  unsigned* ydec = new unsigned[max];
  for(unsigned i = 0; i < max; i++){
    decoy[i] = sarray[i];
    xdec[i] = xco[i];
    ydec[i] = yco[i];
  }

  sarray = new Image*[max];
  xco = new unsigned[max];
  yco = new unsigned[max];
  for(unsigned j = 0; j < max; j++){
    sarray[j] = decoy[j];
    xco[j] = xdec[j];
    yco[j] = ydec[j];
  }
  if(max > limit){
    for(unsigned k = limit; k < max; k++){
      sarray[k] = NULL;

    }
  }
  limit = max;
  delete[] decoy;
  decoy = NULL;
  delete[] xdec;
  xdec = NULL;
  delete[] ydec;
  ydec = NULL;

}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y){

for(unsigned i = 0; i < limit; i++){
  if(sarray[i] == NULL){
    sarray[i] = &sticker;
    xco[i] = x;
    yco[i] = y;
    return i;
  }
}
return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y){
if(index > limit-1 || sarray[index] == NULL){
  return false;
}
xco[index] = x;
yco[index] = y;
return true;
}

void StickerSheet::removeSticker(unsigned index){
sarray[index] = NULL;
xco[index] = 0;
yco[index] = 0;
for(unsigned i = index; i < limit-1; i++){
  sarray[i] = sarray[i + 1];
  sarray[i+1] = NULL;
  xco[i] = xco[i+1];
  xco[i+1] = 0;
  yco[i] = yco[i + 1];
  yco[i + 1] = 0;
}

}

Image* StickerSheet::getSticker(unsigned index) const{
if(sarray[index] == NULL){
  return NULL;
}
return sarray[index];
}

Image StickerSheet::render() const{
  Image* s = new Image(*basepic);
  unsigned width = basepic->width();
  unsigned height = basepic->height();
  for(unsigned x = 0; x < limit; x++){
    if(sarray[x] != NULL){
      unsigned nwidth = xco[x] + sarray[x]->width();
      unsigned nheight = yco[x] + sarray[x]->height();
      if(nwidth>width){
        width = nwidth;
      }
      if(nheight>height){
        height = nheight;
      }
    }
  }
  s->resize(width,height);
  for(unsigned stick = 0; stick < limit; stick++){
    if(sarray[stick] != NULL){
    unsigned widthst = sarray[stick]->width();
    unsigned heightst = sarray[stick]->height();
    unsigned xcoo = xco[stick];
    unsigned ycoo = yco[stick];

    for(unsigned xx = 0; xx < widthst; xx++){
      for(unsigned yy = 0; yy < heightst; yy++){
        cs225::HSLAPixel&alpha = sarray[stick]->getPixel(xx,yy);
        cs225::HSLAPixel&beta = s->getPixel(xx+xcoo,yy+ycoo);
        if(alpha.a > 0){
          beta = alpha;
        }
      }
    }
    }
  }
Image j = *s;
delete s;
return j;
}
