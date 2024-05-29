#include "LinkedList.h"
#include <iostream>
using namespace std;

// Node class constructor
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

// LinkedList class constructor
linkedList::linkedList() {
    head = nullptr;
}

// Insert a new node at the head of the list
void linkedList::insertAtHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Insert a new node at the tail of the list
void linkedList::insertAtTail(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete the first node with the given value
void linkedList::deleteNode(int data) {
    if (head == nullptr) return;

    if (head->data == data) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != data) {
        temp = temp->next;
    }
    if (temp->next == nullptr) return;
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}


Node* linkedList::getHead() {
    return head;
}