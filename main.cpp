#include <iostream>
#include "huffman/huffman.hpp"


int main() {

    std::string text = "hello world";

    Huffman h;

    h.buildTree(text);

    std::unordered_map<char, std::string> huffmanCode;

    h.generateCode(h.getRoot(), "", huffmanCode);

    std::string encoded = h.encode(text, huffmanCode);

    std::string decoded = h.decode(h.getRoot(), encoded);

    std::cout << "Original: " << text << "\n";
    std::cout << "Encoded: " << encoded << "\n";
    std::cout << "Decoded: " << decoded << "\n";
    
    return 0;
}

//all of the file are in different folder and need to be compiled together so use
//g++ -std=c++11 main.cpp huffman/huffman.cpp node/node.cpp -o main (this command to compile the program)
//execute ./main to run the program