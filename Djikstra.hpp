//file    : Djikstra.hpp
//author  : steaKK

#ifndef DJIKSTRA_HPP
#define DJIKSTRA_HPP

#include <iostream>
#include <vector>
#include <queue>

#include "Graph.hpp"

using namespace std;


struct Line {
  int source;
  int destination;
  int distance;
};

class LineComparator
{
  bool reverse;
public:
  LineComparator(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const Line& lhs, const Line&rhs) const
  {
    if (reverse) return (lhs.distance>rhs.distance);
    else return (lhs.distance>rhs.distance);
  }
};

typedef std::priority_queue<int,std::vector<line>,LineComparator> DjikstraPriorityQueue;

class Djikstra {
public:
  static int solve(Graph,int,int);

};


#endif
