#include <iostream>
#include "Graph.h"

int main()
{
    int numberOfVertices;
    int numberOfArcs;
    int vVertex;
    int uVertex;

    //std::cout << "Enter the number of vertices: ";
    std::cin >> numberOfVertices;
    //std::cout << "Enter the number of edges: ";
    std::cin >> numberOfArcs;

    Graph mainGraph = Graph();

    mainGraph.MakeEmptyGraph(numberOfVertices);

    for (int edge = 0; edge < numberOfArcs; edge++) {

        std::cin >> vVertex;
        std::cin >> uVertex;
        mainGraph.AddEdge(vVertex, uVertex);

    }

}
