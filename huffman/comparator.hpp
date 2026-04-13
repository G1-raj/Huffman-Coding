#ifndef COMPARATOR_HPP
#define COMPARATOR_HPP

#include "../node/node.hpp"

class Comparator {

    public:
        bool operator()(Node* a, Node* b) {
            return a->getFrequency() > b->getFrequency();
        }

};

#endif