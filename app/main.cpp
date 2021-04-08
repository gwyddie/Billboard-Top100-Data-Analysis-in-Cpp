#include "../src/nodeClass.hpp"
#include "../src/treeClass.hpp"

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    treeClass tree;

    tree.insert(50);
    tree.insert(40);
    tree.insert(60);
    tree.insert(30);
    tree.inOrder(tree.getRoot());

    return 0;
}
