#pragma once
#include <iostream>
#include <vector>
#include "linkedList.h"

using namespace std;

class Graph {
private:
    vector<linkedList> adjList;
    vector<bool> visited;
    
public:
    Graph();
    void MakeEmptyGraph(int n);
    void AddEdge(int u, int v);
    bool IsAdjacent(int u, int v);
    linkedList GetAdjList(int u);
    void RemoveEdge(int u, int v);
    void reverseGraph();
};
