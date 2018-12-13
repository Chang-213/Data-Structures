#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>

/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::size() const {
  // TODO: Part 2
  unsigned int k = 0;
  k = vertexMap.size();
  return k;
}


/**
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {
  // TODO: Part 2
  unsigned int k = 0;
  k = adjList[v.key()].size();
  return k;
}


/**
* Inserts a Vertex into the Graph by adding it to the Vertex map and adjacency list
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {
  // TODO: Part 2
  V & v = *(new V(key));
  vertexMap.emplace(key, v);  //segfault
  std::list<edgeListIter> def;
  adjList.emplace(key, def);
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  for(auto it = edgeList.begin(); it != edgeList.end(); ++it){
    if(it->get().source().key() == key){
      edgeList.erase(it);
    //  adjList.at(it->get().dest().key()).erase(it->get());
    }
    if(it->get().dest().key() == key){
      edgeList.erase(it);
    //  adjList.at(it->get().source().key()).erase(it);
    }
  }
  adjList.at(key).clear();
  vertexMap.erase(key);
}


/**
* Inserts an Edge into the adjacency list
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
  // TODO: Part 2
  E & e = *(new E(v1, v2));
  E_byRef edge = e;
  edgeList.push_front(edge);
//  edgeListIter edge2 = edgeList.begin();
  adjList.at(v1.key()).push_front(edgeList.begin());
  adjList.at(v2.key()).push_front(edgeList.begin());
  return e;
}


/**
* Removes an Edge from the Graph
* @param key1 The key of the ource Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {
  // TODO: Part 2

  for(auto it = edgeList.begin(); it != edgeList.end(); ++it){
    if(it->get().source().key() == key1 && it->get().dest().key() == key2){
      edgeList.erase(it);
      removeEdge(it);
    }
    if(it->get().source().key() == key2 && it->get().dest().key() == key1){
      edgeList.erase(it);
      removeEdge(it);
    }
  }
}


/**
* Removes an Edge from the adjacency list at the location of the given iterator
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
  adjList.at(it->get().dest().key()).remove(it);
  adjList.at(it->get().source().key()).remove(it);
}


/**
* @param key The key of an arbitrary Vertex "v"
* @return The list edges (by reference) that are adjacent to "v"
*/
template <class V, class E>
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {
  // TODO: Part 2

  std::list<std::reference_wrapper<E>> edges;
  for(edgeListIter y : adjList.at(key)){
      edges.push_front(y->get());
  }

  return edges;
}


/**
* Return whether the two vertices are adjacent to one another
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {
  // TODO: Part 2
  V & v1 = *(new V(key1));
  V & v2 = *(new V(key2));
  E & e1 = *(new E(v1, v2));
  std::list<std::reference_wrapper<E>> first = incidentEdges(key1);
  std::list<std::reference_wrapper<E>> second = incidentEdges(key2);
  if(first.size() < second.size()){
    for(auto it = first.begin(); it != first.end(); ++it){
      if(it->get() == e1){
        return true;
        break;
      }
    }
  }
  else{
    for(auto it = second.begin(); it != second.end(); ++it){
      if(it->get() == e1){
        return true;
        break;
      }
    }
  }
  return false;
}
