#include "Graph.h"

class linkedList;


Graph::Graph() {

}


void Graph::MakeEmptyGraph(int n) {
    adjecentList.resize(n);
    for (int i = 0; i < n; i++) {
        adjecentList[i] = linkedList();
    }
    visited.resize(n);
    for (int i = 0; i < n; i++)
        visited[i] = false;
}


linkedList Graph::GetAdjList(int u) {
    return adjecentList[u];
}


bool Graph::IsAdjacent(int u, int v) {
    bool flag = false;
    Node* currentNeightboar = adjecentList[u].getHead();
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
        adjecentList[u].insertAtTail(v);
    }
}


void Graph::RemoveEdge(int u, int v) {
    adjecentList[u].deleteNode(v);
}



void Graph::reverseGraph() {
    vector<linkedList> reverseList;
    Node* currentNeightbor;
    reverseList.resize(adjecentList.size());

    for (int vertix = 0; vertix < adjecentList.size(); vertix++) {
        currentNeightbor = adjecentList[vertix].getHead();
        while (currentNeightbor != NULL) {
            reverseList[currentNeightbor->data].insertAtTail(vertix);
            currentNeightbor = currentNeightbor->next;
        }
    }
    adjecentList = std::move(reverseList);
}