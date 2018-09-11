#include <cstdlib>
#include <cmath>
#include "cs225/PNG.h"
using cs225::PNG;

#include "cs225/HSLAPixel.h"
using cs225::HSLAPixel;
using namespace cs225;
#include <string>


PNG* setupOutput(unsigned w, unsigned h) {
  PNG* image = new PNG(w, h);
  return image;
}

void rotate(std::string inputFile, std::string outputFile) {

  PNG* original = new PNG;
  original->readFromFile(inputFile);
  unsigned width = original->width();
  unsigned height = original->height();
  PNG* output = setupOutput(width, height);
  for (unsigned y = 0; y < height; y++) {
      for (unsigned x = 0; x < width; x++) {
        HSLAPixel flip = (*original).getPixel((width-1) - x, (height-1) - y);
        output->getPixel(x,y) = flip;
      }
    }
    output->writeToFile(outputFile);
    delete original;
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png(width, height);

  for(unsigned y = 0; y < height; y++){
    for(unsigned x = 0; x < width; x++){
      if(x < width/3){
        HSLAPixel hoop = png.getPixel(x, y);
        hoop.h = 140;
        hoop.l = 0.5;
        hoop.s = 1;
        png.getPixel(x, y) = hoop;
      }
      if(x > (2*width)/3){
        HSLAPixel hoop = png.getPixel(x, y);
        hoop.h = 10;
        hoop.l = 0.5;
        hoop.s = 1;
        png.getPixel(x, y) = hoop;
      }
      if(x >= width/3 && x <=(2*width)/3){
        HSLAPixel hoop = png.getPixel(x, y);
        hoop.h = 80;
        hoop.l = 0.5;
        hoop.s = 1;
        png.getPixel(x, y) = hoop;
      }

    }
  }
  return png;
}
