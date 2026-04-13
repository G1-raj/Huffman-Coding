#include "node.hpp"

//Implementation of leaf node construcotr
Node::Node(char data, int frequency) {
    //initializing all the data;
    this->data = data;
    this->frequency = frequency;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

//implementation of internal node construcotr
Node::Node(int frequency, Node* left, Node* right) {
    //initializing all the data;
    this->data = '\0';
    this->frequency = frequency;
    this->leftChild = left;
    this->rightChild = right;
}

char Node::getData() const {
    return data;
}

int Node::getFrequency() const {
    return frequency;
}

Node* Node::getLeft() const {
    return leftChild;
}

Node* Node::getRight() const {
    return rightChild;
}