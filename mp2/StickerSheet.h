/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once

#include "Image.h"

 class StickerSheet : public Image {
 private:
  unsigned* xco;
  unsigned* yco;
  Image** sarray;
  unsigned limit;
  Image* basepic;
 public:
  void destroy();
   StickerSheet(const Image &picture, unsigned max);
   ~StickerSheet();
   StickerSheet(const StickerSheet &other);
   const StickerSheet & operator=(const StickerSheet &other);
   void changeMaxStickers(unsigned max);
   int addSticker(Image &sticker, unsigned x, unsigned y);
   bool translate(unsigned index, unsigned x, unsigned y);
   void removeSticker(unsigned index);
   Image * getSticker(unsigned index) const ;
   Image render() const ;

 };
