/* Your code here! */
#include "maze.h"

SquareMaze::SquareMaze(){

}

void SquareMaze::makeMaze(int width, int height){
  w = width;
  h = height;
  int area = w * h;
  for (int i = 0; i < area; i++) {
    down.push_back(true);
    right.push_back(true);
  }
  DisjointSets sets;
  sets.addelements(area);
  while (area > 1) {
    int randX = rand() % w;
    int randY = rand() % h;
    bool randR = rand() % 2;
    if (randR == true) {
      if (randX < w - 1 && right[randX + randY * w] && sets.find(randX + randY * w) != sets.find(randX + 1 + randY * w)) {
          right[randX + randY * w] = false;
          sets.setunion(sets.find(randX + randY * w), sets.find(randX + 1 + randY * w));
          area--;
        }
      }
      else {
        if (randY < h - 1 && down[randX + randY * w] && sets.find(randX + randY * w) != sets.find(randX + (randY + 1) * w)) {
            down[randX + randY * w] = false;
            sets.setunion(sets.find(randX + randY * w), sets.find(randX + (1 + randY) * w));
            area--;
          }
        }
      }
}

bool SquareMaze::canTravel(int x, int y, int dir) const{
if(dir == 0){
  if(right[x+(y*w)] == true){
    return false;
  }
  else{
    return true;
  }
}
if(dir == 1){
  if(down[x+(y*w)] == true){
    return false;
  }
  else{
    return true;
  }
}
if(dir == 2){
  if(x == 0){
    return false;
  }
  else{
    if(right[(x-1)+(y*w)] == true){
      return false;
    }
    else{
      return true;
    }
  }
}
if(dir == 3){
  if(y == 0){
    return false;
  }
  else{
    if(down[x+((y-1)*w)] == true){
      return false;
    }
    else{
      return true;
    }
  }
}
return true;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists){
if(dir == 0){
  right[x+(y*w)] = exists;
}
if(dir == 1){
  down[x+(y*w)] = exists;
}
}

vector<int> SquareMaze::solveMaze(){
  vector<int> bottom;
  vector<bool> seen;
  for(int i = 0; i < w*h; i++){
    seen.push_back(false);
  }
  queue<int> que;
  que.push(0);
  seen[0] = true;
  map<int, int> path;
  while(que.empty() == false) {
    int ret= que.front();
    que.pop();
    int x = ret % w;
    int y = ret / w;
    if (y == h - 1) {
      bottom.push_back(ret);
    }
    if (canTravel(x, y, 0) == true && seen[ret+ 1] == false) {
      path.insert(pair<int, int> (ret+ 1, ret));
      seen[ret+ 1] = true;
      que.push(ret+ 1);
    }
    if (canTravel(x, y, 1) == true && seen[ret+ w] == false) {
      path.insert(pair<int, int> (ret+ w, ret));
      seen[ret+ w] = true;
      que.push(ret+ w);
    }
    if (canTravel(x, y, 2) == true && seen[ret- 1] == false) {
      path.insert(pair<int, int> (ret- 1, ret));
      seen[ret- 1] = true;
      que.push(ret- 1);
    }
    if (canTravel(x, y, 3) == true && seen[ret- w] == false) {
      path.insert(pair<int, int> (ret- w, ret));
      seen[ret- w] = true;
      que.push(ret- w);
    }
  }
  vector<int> temp;
  int bot = w - 1;
  while(bottom[bot] == bottom[bot - 1]){
    bot = bot - 1;
  }
  int begin = bottom[bot];
  while (begin != 0) {
    int last = path[begin];
    if (begin == last + 1){
      temp.push_back(0);
    }
    if (begin == last + w){
      temp.push_back(1);
    }
    if (begin == last - 1){
      temp.push_back(2);
    }
    if (begin == last - w){
      temp.push_back(3);
    }
    begin = last;
  }
  reverse(temp.begin(),temp.end());
  return temp;
}

PNG* SquareMaze::drawMaze() const{
  int wid = (w * 10) + 1;
  int hei = (h * 10) + 1;
  PNG* maze = new PNG(wid, hei);
  for (int i = 0; i < hei; i++) {
    HSLAPixel & pixel = maze->getPixel(0, i);
    pixel.l = 0.0;
  }
  for (int i = 10; i < wid; i++) {
    HSLAPixel & pixel = maze->getPixel(i, 0);
    pixel.l = 0.0;
  }
  for (int x = 0; x < w; x++) {
    for (int y = 0; y < h; y++) {
      if (right[x + (y * w)] == true) {
        for (int i = 0; i < 11; i++) {
          HSLAPixel & pixel = maze->getPixel((x + 1) * 10, (10 * y) + i);
          pixel.l = 0.0;
        }
      }
      if (down[x + (y * w)] == true) {
        for (int i = 0; i < 11; i++) {
          HSLAPixel & pixel = maze->getPixel((10 * x) + i, (y + 1) * 10);
          pixel.l = 0.0;
        }
      }
    }
  }
  return maze;
}

PNG* SquareMaze::drawMazeWithSolution(){
  PNG* maze = drawMaze();
  vector<int> dir = solveMaze();
  int x = 5;
  int y = 5;
  for (unsigned i = 0; i < dir.size(); i++) {
    if (dir[i] == 0) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        x = x + 1;
      }
    }
     if (dir[i] == 1) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        y = y + 1;
      }
    }
     if (dir[i] == 2) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        x = x - 1;
      }
    }
     if (dir[i] == 3) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        y = y - 1;
      }
    }
  }
  HSLAPixel & p = maze->getPixel(x, y);
  p.h = 0;
  p.s = 1;
  p.l = 0.5;
  p.a = 1.0;
  x = x - 4;
  y = y + 5;
  for (int i = 0; i < 9; i++) {
    HSLAPixel & pixel = maze->getPixel(x, y);
    pixel.l = 1.0;
    pixel.a = 1.0;
    x = x + 1;
  }
  return maze;
}
PNG * SquareMaze::drawCreativeMaze() const {
  int wid = (w * 10) + 1;
  int hei = (h * 10) + 1;
  PNG* maze = new PNG(wid, hei);
  for (int i = 0; i < hei; i++) {
    HSLAPixel & pixel = maze->getPixel(0, i);
    pixel.l = 0.0;
  }
  for (int i = 10; i < wid; i++) {
    HSLAPixel & pixel = maze->getPixel(i, 0);
    pixel.l = 0.0;
  }
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < y +22 ; x++) {
      if (right[x + (y * w)]) {
        for (int i = 0; i < 11; i++) {
          HSLAPixel & pixel = maze->getPixel((x + 1) * 10, (10 * y) + i);
          pixel.l = 0.0;
        }
      }
      if (down[x + y * w]) {
        for (int i = 0; i < 11; i++) {
          HSLAPixel & pixel = maze->getPixel((10 * x) + i, (y + 1) * 10);
          pixel.l = 0.0;
        }
      }
    }
  }
  return maze;
}
PNG * SquareMaze::drawMazeWithSolutioncreative() {
  PNG* maze = drawCreativeMaze();
  vector<int> dir = solveMaze();
  int x = 5;
  int y = 5;
  for (unsigned i = 0; i < dir.size(); i++) {
    if (dir[i] == 0) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        x = x + 1;
      }
    }
     if (dir[i] == 1) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        y = y + 1;
      }
    }
     if (dir[i] == 2) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        x = x - 1;
      }
    }
     if (dir[i] == 3) {
      for (int i = 0; i < 10; i++) {
        HSLAPixel & pixel = maze->getPixel(x, y);
        pixel.h = 0;
        pixel.s = 1;
        pixel.l = 0.5;
        y = y - 1;
      }
    }
  }
  HSLAPixel & p = maze->getPixel(x, y);
  p.h = 0.0;
  p.s = 1.0;
  p.l = 0.5;
  p.a = 1.0;
  x = x - 4;
  y = y + 5;
  for (int i = 0; i < 9; i++) {
    HSLAPixel & pixel = maze->getPixel(x, y);
    pixel.l = 1.0;
    pixel.a = 1.0;
    x = x + 1;
  }
  return maze;
}
