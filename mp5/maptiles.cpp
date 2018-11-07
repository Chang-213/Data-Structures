/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>(pixel.l, pixel.u, pixel.v);
}

MosaicCanvas* mapTiles(SourceImage const& theSource, vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    vector<Point <3>> luv;
    int numRows = theSource.getRows();
    int numCols = theSource.getColumns();
   	luv.resize(theTiles.size());
   	map<Point<3>,int> pointmap;
    unsigned i = 0;
    while(i != luv.size()){
   		luv[i].set(0, theTiles[i].getAverageColor().l);
   		luv[i].set(1, theTiles[i].getAverageColor().u);
   		luv[i].set(2, theTiles[i].getAverageColor().v);
   		pointmap[luv[i]] = i;
      i++;
   	}
   	KDTree<3> tree(luv);
    MosaicCanvas* final = new MosaicCanvas(numRows, numCols);
    vector<Point<3>> hold;
    for (int i = 0; i < numRows; i++){
      for (int j = 0; j < numCols; j++){
   		   LUVAPixel pixel = theSource.getRegionColor(i, j);
   		   double first[3];
   		   first[0] = pixel.l;
   		   first[1] = pixel.u;
   		   first[2] = pixel.v;
         Point<3> theOne(first);
         hold.push_back(theOne);
   		   final->setTile(i, j, &theTiles[pointmap[tree.findNearestNeighbor(theOne)]]);
    }
  }
       return final;
}
