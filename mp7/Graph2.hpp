#include <queue>
#include <algorithm>
#include <string>
#include <list>

/**
 * Returns an std::list of vertex keys that creates some shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  std::list<std::string> path;
  if(isAdjacent(start,end)==true){
    path.push_back(start);
    path.push_back(end);
    return path;
  }
  path.push_back(start);
  std::list<std::string> temp;
  std::list<std::string> grapes;
  std::list<std::string> monkey;
  std::list<std::string> apple;
  std::string lol;
  lol.assign(start);
  std::list<std::string> names;
  std::list<std::reference_wrapper<E>> first = incidentEdges(lol);
  for(auto it = first.begin(); it != first.end(); ++it){
      names.push_back(it->get().dest().key());
      if(isAdjacent(names.back(), end) == true){
        path.push_back(names.back());
        path.push_back(end);
        return path;
      }
      names.push_back(it->get().source().key());
      if(isAdjacent(names.back(), end) == true){
        path.push_back(names.back());
        path.push_back(end);
        return path;
      }
  }
  while(names.size() != 0){
    std::list<std::reference_wrapper<E>> first = incidentEdges(names.back());
    for(auto it = first.begin(); it != first.end(); ++it){
      temp.push_back(it->get().dest().key());
      if(isAdjacent(temp.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(end);
        return path;
        break;
      }
      temp.push_back(it->get().source().key());
      if(isAdjacent(temp.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(end);
        return path;
        break;
      }
    }
    names.pop_back();
  }

  while(temp.size() != 0){
    std::list<std::reference_wrapper<E>> second = incidentEdges(temp.back());
    for(auto it = second.begin(); it != second.end(); ++it){
      grapes.push_back(it->get().dest().key());
      if(isAdjacent(grapes.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(grapes.back());
        path.push_back(end);
        return path;
      }
      grapes.push_back(it->get().source().key());
      if(isAdjacent(grapes.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(grapes.back());
        path.push_back(end);
        return path;
      }
    }
    temp.pop_back();
  }

  while(grapes.size() != 0){
    std::list<std::reference_wrapper<E>> second = incidentEdges(grapes.back());
    for(auto it = second.begin(); it != second.end(); ++it){
      monkey.push_back(it->get().dest().key());
      if(isAdjacent(monkey.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(grapes.back());
        path.push_back(monkey.back());
        path.push_back(end);
        return path;
      }
      monkey.push_back(it->get().source().key());
      if(isAdjacent(monkey.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(grapes.back());
        path.push_back(monkey.back());
        path.push_back(end);
        return path;
      }
    }
    grapes.pop_back();
  }


  while(monkey.size() != 0){
    std::list<std::reference_wrapper<E>> second = incidentEdges(monkey.back());
    for(auto it = second.begin(); it != second.end(); ++it){
      apple.push_back(it->get().dest().key());
      if(isAdjacent(apple.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(grapes.back());
        path.push_back(monkey.back());
        path.push_back(apple.back());
        path.push_back(end);
        return path;
      }
      apple.push_back(it->get().source().key());
      if(isAdjacent(apple.back(), end) == true){
        path.push_back(names.back());
        path.push_back(temp.back());
        path.push_back(grapes.back());
        path.push_back(monkey.back());
        path.push_back(apple.back());
        path.push_back(end);
        return path;
      }
    }
    monkey.pop_back();
  }


  return path;
}
