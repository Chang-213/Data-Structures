
#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main() {

  // @todo [Part 3]
  // - The code below assumes you have an Animation called `animation`
  // - The code provided below produces the `myFloodFill.png` file you must
  //   submit Part 3 of this assignment -- uncomment it when you're ready.



  PNG p;
  p.readFromFile("tests/pacman.png");
  FloodFilledImage image(p);
  BFS b(p, Point(10,10), 0.5);
  MyColorPicker col;
  image.addFloodFill(b, col);
  Animation animation = image.animate(500);
  DFS d(p, Point(120,120), 0.5);
  RainbowColorPicker rainbow(0.5);
  image.addFloodFill(d, rainbow);
  animation = image.animate(500);
  PNG lastFrame = animation.getFrame( animation.frameCount() - 1 );
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
