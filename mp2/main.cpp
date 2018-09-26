#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image OG;
  Image sticker;
  Image sticker2;
  Image sticker3;
  OG.readFromFile("alma.png");
  sticker.readFromFile("i.png");
  sticker2.readFromFile("gucci.png");
  sticker3.readFromFile("bape.png");
  StickerSheet Foods(OG,7);
  Foods.addSticker(sticker, 200, 200);
  Foods.addSticker(sticker2, 100, 100);
  Foods.addSticker(sticker3, 300, 300);
  Image gg = Foods.render();
  gg.writeToFile("myImage.png");
  Foods.destroy();
  return 0;
}
