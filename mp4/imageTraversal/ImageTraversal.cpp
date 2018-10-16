#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */

  T = NULL;
  finish = false;

}

ImageTraversal::Iterator::Iterator(PNG png, Point start, double tolerance, ImageTraversal* in){
  p = png;
  strt = start;
  tol = tolerance;
  T = in;
  strt2 = strt;
  int total = p.height() * p.width();
  for(int i = 0; i < total; i++){
    seen.push_back(false);
  }

  if(available(strt) == true){
finish = false;
    seen[strt.x + (strt.y * p.width())] = true;
    search.push_back(strt);
  }
  else{
    finish = true;
  }
}

bool ImageTraversal::Iterator::available(Point next){
  if(next.x >= p.width() || next.y >= p.height()){
    return false;
  }
  HSLAPixel ret = (p.getPixel(strt2.x, strt2.y));
  HSLAPixel ret2 = (p.getPixel(next.x, next.y));
  if(ImageTraversal::calculateDelta(ret, ret2) >= tol){
    return false;
  }
  return true;
}

void ImageTraversal::Iterator::setfinish(bool ret){
  finish = ret;
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */

  Point ret = Point(strt.x + 1, strt.y);
  Point ret2 = Point(strt.x, strt.y + 1);
  Point ret3 = Point(strt.x - 1, strt.y);
  Point ret4 = Point(strt.x, strt.y - 1);
  if(available(ret) == true){
    T->add(ret);
  }
  if(available(ret2) == true){
    T->add(ret2);
  }
  if(available(ret3) == true){
    T->add(ret3);
  }
  if(available(ret4) == true){
    T->add(ret4);
  }
  if(T->empty() == true){
    finish = true;
    return *this;
  }
  Point next = T->pop();
  while(seen[next.x + (next.y * p.width())] == true){
    if(T->empty() == true){
      finish = true;
      return *this;
    }
    next = T->pop();
  }
  strt = next;
  seen[strt.x + (strt.y * p.width())] = true;
  search.push_back(strt);

  return *this;

}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return strt;
  //return Point(0,0);
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */

  if(finish != other.finish){
    return true;
  }

  return false;
}
