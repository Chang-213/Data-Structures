/**
 * @file NetworkFlow.cpp
 * CS 225: Data Structures
 */

#include <vector>
#include <algorithm>
#include <set>

#include "graph.h"
#include "edge.h"

#include "NetworkFlow.h"

int min(int a, int b) {
  if (a<b)
    return a;
  else return b;
}

NetworkFlow::NetworkFlow(Graph & startingGraph, Vertex source, Vertex sink) :
  g_(startingGraph), residual_(Graph(true,true)), flow_(Graph(true,true)), source_(source), sink_(sink) {
source_ = source;
sink_ = sink;
residual_ = g_;
flow_ = g_;
vector<Edge> ed = flow_.getEdges();
int k = ed.size();
for(int i = 0; i < k; i++){
  flow_.setEdgeWeight(ed[i].source, ed[i].dest, 0);
}
vector<Edge> res = residual_.getEdges();
int y = res.size();
for(int i = 0; i < y; i++){
  residual_.insertEdge(res[i].dest, res[i].source);
  residual_.setEdgeWeight(res[i].dest, res[i].source, 0);
}
  // YOUR CODE HERE
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the helper function.
   *
   * @@params: source -- The starting (current) vertex
   * @@params: sink   -- The destination vertex
   * @@params: path   -- The vertices in the path
   * @@params: visited -- A set of vertices we have visited
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink,
  std::vector<Vertex> &path, std::set<Vertex> &visited) {

  if (visited.count(source) != 0)
    return false;
  visited.insert(source);

  if (source == sink) {
    return true;
  }

  vector<Vertex> adjs = residual_.getAdjacent(source);
  for(auto it = adjs.begin(); it != adjs.end(); it++) {
    if (visited.count(*it) == 0 && residual_.getEdgeWeight(source,*it) > 0) {
      path.push_back(*it);
      if (findAugmentingPath(*it,sink,path,visited))
        return true;
      else {
        path.pop_back();
      }
    }
  }

  return false;
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the main function.  It initializes a set to keep track of visited vertices.
   *
   * @@params: source -- The starting (current) vertex
   * @@params: sink   -- The destination vertex
   * @@params: path   -- The vertices in the path
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, std::vector<Vertex> &path) {
   std::set<Vertex> visited;
   path.clear();
   path.push_back(source);
   return findAugmentingPath(source,sink,path,visited);
}

  /**
   * pathCapacity - Determine the capacity of a path in the residual graph.
   *
   * @@params: path   -- The vertices in the path
   */

int NetworkFlow::pathCapacity(const std::vector<Vertex> & path) const {
  // YOUR CODE HERE
  int temp = 100000;
  int k = path.size()-1;
  for(int i = 0; i < k; i++){
    if(temp > residual_.getEdgeWeight(path[i], path[i+1])){
      temp = residual_.getEdgeWeight(path[i], path[i+1]);
    }
  }
  return temp;
}

  /**
   * calculuateFlow - Determine the capacity of a path in the residual graph.
   * Sets the member function `maxFlow_` to be the flow, and updates the
   * residual graph and flow graph according to the algorithm.
   *
   * @@outputs: The network flow graph.
   */

const Graph & NetworkFlow::calculateFlow() {
  // YOUR CODE HERE
//  findAugmentingPath(source_, sink_, money);
maxFlow_ = 0;
while(findAugmentingPath(source_, sink_, money) != false){
  int value = pathCapacity(money);
  int k = money.size();
  for(int i = 0; i < k-1; i++){
    if(flow_.edgeExists(money[i], money[i+1]) == true){
      flow_.setEdgeWeight(money[i], money[i+1], flow_.getEdgeWeight(money[i], money[i+1]) + value);
    }
    else{
      flow_.setEdgeWeight(money[i+1], money[i], flow_.getEdgeWeight(money[i+1], money[i]) - value);
    }
  }
  for(int i = 0; i < k-1; i++){
    residual_.setEdgeWeight(money[i], money[i+1], residual_.getEdgeWeight(money[i], money[i+1]) - value);
    residual_.setEdgeWeight(money[i+1], money[i], residual_.getEdgeWeight(money[i+1], money[i]) + value);
  }
//  findAugmentingPath(source_, sink_, money);
maxFlow_ = maxFlow_ + value;
}

  return flow_;
}

int NetworkFlow::getMaxFlow() const {
  return maxFlow_;
}

const Graph & NetworkFlow::getGraph() const {
  return g_;
}

const Graph & NetworkFlow::getFlowGraph() const {
  return flow_;
}

const Graph & NetworkFlow::getResidualGraph() const {
  return residual_;
}
