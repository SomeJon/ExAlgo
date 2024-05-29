#include "Graph.h"

class linkedList;


Graph::Graph() {
    
}


void Graph::MakeEmptyGraph(int n) {
    adjList.resize(n);
    for (int i = 0; i < n; i++) {
        adjList[i] = linkedList();
    }
    visited.resize(n);
    for (int i = 0; i < n; i++)
        visited[i] = false;
}


linkedList Graph::GetAdjList(int u) {
    return adjList[u];
}


bool Graph::IsAdjacent(int u, int v) {
    bool flag = false;
    Node* currentNeightboar = adjList[u].getHead();
    while (currentNeightboar != NULL) {
        if (currentNeightboar->data == v) {
            flag = true;
            break;
        }
        currentNeightboar = currentNeightboar->next;
    }
    return flag;
}



void Graph::AddEdge(int u, int v) {
    if (!IsAdjacent(u, v)) {
        adjList[u].insertAtTail(v);
    }
}


void Graph::RemoveEdge(int u, int v) {
    adjList[u].deleteNode(v);
}



void Graph::reverseGraph() {

}
