//Declaration of Node (Binary tree)

#ifndef NODE_HPP
#define NODE_HPP

class Node {

    private:
        char data;
        int frequency;
        Node* leftChild;
        Node* rightChild;

    public:
        Node(char data, int frequency); // leaf node constructor
        Node(int frequency, Node* left, Node* right); // internal constructor


        char getData() const;
        int getFrequency() const;
        Node* getLeft() const;
        Node* getRight() const;
};

#endif