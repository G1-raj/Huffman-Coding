#include <string>
#include <unordered_map>
#include <vector>
#include <queue>
#include "comparator.hpp"
#include "huffman.hpp"
#include "../node/node.hpp"

Huffman::Huffman() {}

void Huffman::buildTree(const std::string& text) {

    std::unordered_map<char, int> frequencyMap;
    std::priority_queue<Node*, std::vector<Node*>, Comparator> nodeQueue;

    for(auto const& character: text) {
        frequencyMap[character]++;
    }

    for(auto const& itr: frequencyMap) {
        Node* newNode = new Node(itr.first, itr.second);
        nodeQueue.push(newNode);
    }

    while(nodeQueue.size() > 1) {

        Node* left = nodeQueue.top();
        nodeQueue.pop();
        Node* right = nodeQueue.top();
        nodeQueue.pop();

        Node* merged = new Node(left->getFrequency() + right->getFrequency(), left, right);
        nodeQueue.push(merged);
        
    }

    root = nodeQueue.top();

}

Node* Huffman::getRoot() const {
    return root;
}

void Huffman::generateCode(Node* node, std::string code, std::unordered_map<char, std::string>& huffmanCode) {

    if(!node) return;

    if(node->getLeft() == nullptr && node->getRight() == nullptr) {
        huffmanCode[node->getData()] = code;
        return;
    }

    generateCode(node->getLeft(), code + '0', huffmanCode);
    generateCode(node->getRight(), code + '1', huffmanCode);

}

std::string Huffman::encode(std::string text, std::unordered_map<char, std::string>& huffmanCode) {

    std::string encoded = "";

    for(auto const& ch: text) {
        encoded += huffmanCode[ch];
    }

    return encoded;

}

std::string Huffman::decode(Node* root, std::string encoded) {

    std:: string decoded = "";
    Node* current = root;

    for(auto const& bit: encoded) {
        if(bit == '0') {
            current = current->getLeft();
        } else {
            current = current->getRight();
        }

        if(current->getLeft() == nullptr && current->getRight() == nullptr) {
            decoded += current->getData();
            current = root;
        }
    }


    return decoded;

}