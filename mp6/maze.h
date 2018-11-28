/* Your code here! */
#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <utility>
#include <cstdlib>
#include "dsets.h"
#include "cs225/PNG.h"

using namespace cs225;
using namespace std;

class SquareMaze
{
  public:
    SquareMaze();
    void makeMaze(int width, int height);
    bool canTravel(int x, int y, int dir) const;
    void setWall(int x, int y, int dir, bool exists);
    vector<int> solveMaze();
    PNG* drawMaze() const;
    PNG* drawCreativeMaze() const;
    PNG* drawMazeWithSolution();
    PNG* drawMazeWithSolutioncreative();

  private:
    int w;
    int h;
    vector<bool> right;
    vector<bool> down;
};
