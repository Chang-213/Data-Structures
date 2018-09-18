#include "Image.h"



void Image::lighten(){

  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.l = light.l + 0.1;
      if(light.l > 1){
        light.l = 1;
      }
      this->getPixel(x,y) = light;
    }
  }

}
void Image::lighten(double amount){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.l = light.l + amount;
      if(light.l >1){
        light.l = 1;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::darken(){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.l = light.l - 0.1;
      if(light.l <0){
        light.l = 0;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::darken(double amount){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.l = light.l - amount;
      if(light.l <0){
        light.l = 0;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::saturate(){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.s = light.s + 0.1;
      if(light.s >1){
        light.s = 1;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::saturate(double amount){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.s = light.s + amount;
      if(light.s >1){
        light.s = 1;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::desaturate(){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.s = light.s - 0.1;
      if(light.s <0){
        light.s = 0;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::desaturate(double amount){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.s = light.s - amount;
      if(light.s <0){
        light.s = 0;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::grayscale(){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.s = 0;

            this->getPixel(x,y) = light;
    }
    }
  }
void Image::rotateColor(double degrees){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      light.h = light.h + degrees;
      if(light.h >=360){
        light.h = light.h-360;
      }
      if(light.h < 0){
        light.h = 360+light.h;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::illinify(){
  unsigned width = this->width();
  unsigned height = this->height();
  for(unsigned x = 0; x<width; x++){
    for(unsigned y = 0; y<height; y++){
      cs225::HSLAPixel light = this->getPixel(x,y);
      if(light.h >102 && light.h < 282){
        light.h = 216;
      }
      else{
        light.h = 1;
      }
            this->getPixel(x,y) = light;
    }
    }
  }
void Image::scale(double factor){
  unsigned int width = this->width();
  unsigned int height = this->height();

PNG More = PNG(width*factor, height*factor);
  for(unsigned int x = 0; ((1/factor)*x)<width; x++){
    for(unsigned int y = 0; ((1/factor)*y)<height; y++){
      cs225::HSLAPixel light = this->getPixel((1/factor)*x, (1/factor)*y);
            More.getPixel(x,y) = light;
    }
    }
    this->resize(factor * width, factor * height);
    for(unsigned int x = 0; ((1/factor)*x)<width; x++){
      for(unsigned int y = 0; ((1/factor)*y)<height; y++){
          this->getPixel(x,y) = More.getPixel(x,y);
      }
    }

}
void Image::scale(unsigned w, unsigned h){
  unsigned int width = this->width();
  unsigned int height = this->height();
  double factorw = w/width;
  double factorh = h/height;
PNG More = PNG(w, h);
  for(unsigned int x = 0; ((1/factorw)*x)<width; x++){
    for(unsigned int y = 0; ((1/factorh)*y)<height; y++){
      cs225::HSLAPixel light = this->getPixel((1/factorw)*x, (1/factorh)*y);
            More.getPixel(x,y) = light;
    }
    }
    this->resize(w, h);
    for(unsigned int x = 0; ((1/factorw)*x)<width; x++){
      for(unsigned int y = 0; ((1/factorh)*y)<height; y++){
          this->getPixel(x,y) = More.getPixel(x,y);
      }
    }

}
