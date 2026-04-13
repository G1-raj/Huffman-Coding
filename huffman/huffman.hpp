#ifndef HUFFMAN_HPP
#define HUFFMAN_HPP

#include <string>
#include <unordered_map>
#include "../node/node.hpp"

class Huffman {

    private:
        Node* root;

    public:
        Huffman();

        void buildTree(const std::string& text);
        void generateCode(Node* node, std::string code, std::unordered_map<char, std::string>& huffmanCode);
        Node* getRoot() const;
        std::string encode(std::string text, std::unordered_map<char, std::string>& huffmanCode);
        std::string decode(Node* root, std::string encoded);

};

#endif