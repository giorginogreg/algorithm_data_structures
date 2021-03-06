//
// Created by Greg on 21/03/22.
//
#include "include/LinkedList.h"

int main(int argc, char const *argv[]) {
    // T is an int node
    LinkedList<int, 0> myList;
    myList.initialize();
    TDA_Greg::Node<int>* tempNode = myList.firstNodeList();
    for (int i = 0; i < 10; ++i) {
        int elem_to_insert = 10 * (i + 1);

        myList.insertNodeAfter(tempNode, elem_to_insert);
        tempNode = tempNode->getNextPos();
    }
}
