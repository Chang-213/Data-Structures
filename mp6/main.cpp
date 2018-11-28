#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;

int main()
{
    // Write your own main here
    SquareMaze main;
    main.makeMaze(75, 75);
    PNG * actualOutput = main.drawCreativeMaze();
    actualOutput->writeToFile("creative.png");
    PNG * actualOutput_sol = main.drawMazeWithSolutioncreative();
    actualOutput_sol->writeToFile("creative_solution.png");
    return 0;
}
