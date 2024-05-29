#pragma once


class Node {
public:
    int data;
    Node* next;

    Node(int data);
};

class linkedList {
private:
    Node* head;

public:
    linkedList();
    Node* getHead();
    void insertAtHead(int data);
    void insertAtTail(int data);
    void deleteNode(int data);
};