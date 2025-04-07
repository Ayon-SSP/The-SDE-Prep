#include <bits/stdc++.h>
#include "BST.h"
using namespace std;

int main() {
    auto* tree = new BST<int>();

    if (tree->isEmpty()) cout << "Tree is Empty..." << endl;
    else cout << "Tree is NOT Empty..." << endl;

    tree->insert(13);
    tree->insert(10);
    tree->insert(25);
    tree->insert(2);

    tree->insert(12);
    tree->insert(20);
    tree->insert(31);
    tree->insert(29);

    cout << "Number of Nodes: " << tree->countNodes() << endl;
    cout << "Number of Leaves: " << tree->countLeaves() << endl;
    cout << "Number of Internal Nodes: " << tree->countInternalNodes() << endl;

    tree->erase(12);
    if (tree->search(12)) cout << "Found" << endl;
    else cout << "NOT Found" << endl;

    cout << "Minimum: " << tree->findMin() << endl;
    cout << "Maximum: " << tree->findMax() << endl;

    cout << "Breath First: ";
    tree->printBreadthFirst();

    cout << "Depth First (Inorder Traversal): ";
    tree->printDepthFirst("Inorder Traversal");

    cout << "Depth First (Preorder Traversal): ";
    tree->printDepthFirst("Preorder Traversal");

    cout << "Depth First (Postorder Traversal): ";
    tree->printDepthFirst("Postorder Traversal");

    cout << "Sum of nodes: " << tree->findSum() << endl;
    cout << "Height of the tree: " << tree->height() << endl;

    tree->clear();
    cout << "Number of Nodes: " << tree->countNodes() << endl;

    return 0;
}