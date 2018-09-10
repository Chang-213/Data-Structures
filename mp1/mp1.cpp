#include "cs225/PNG.h"
using cs225::PNG;

#include "cs225/HSLAPixel.h"
using cs225::HSLAPixel;

#include <string>


PNG* setupOutput(unsigned w, unsigned h) {
  PNG* image = new PNG(w, h);
  return image;
}

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  PNG* original = new PNG;
  original->readFromFile(inputFile);
  unsigned width = original->width() const;
  unsigned height = original->height() const;
  PNG* output = setupOutput(width, height);
  for (unsigned y = 1; y < height; y++) {
      for (unsigned x = 1; x < width; x++) {
        HSLAPixel flip = original->getPixel(width - x, height - y);
        output->getPixel(x,y) = flip;
      }
    }
    output->writeToFile(outputFile);
    delete original;
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png(width, height);
  // TODO: Part 3

  return png;
}
