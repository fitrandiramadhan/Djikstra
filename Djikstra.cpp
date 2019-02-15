//file    : Djikstra.cpp
//author  : steaKK

#include "Djikstra.hpp"

Djikstra::solve(Graph _Graph, int source, int destination) {
  DjikstraPriorityQueue<Line> dpq;
  for(int i=0;i<_Graph.get_size();i++) {
    if(i!=source) {
      if(_Graph.get_data(source,i)!=-1) {
        Line l; l.source=source; l.destination=i; l.distance=_Graph.get_data(source,i);
        dpq.push(l);
      }
    }

    while (dpq.top().destination!=destination) {
      
    }
    
  }
}
