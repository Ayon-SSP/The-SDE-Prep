# Binary Search Tree (BST)

## Features
- **Insert**: Add elements to the BST.
- **Erase**: Remove nodes from the BST.
- **Search**: Check if an element exists in the BST.
- **Traversal**: Supports in-order, pre-order, post-order, and breadth-first traversals.
- **Find Min/Max**: Find the smallest and largest elements in the BST.
- **Height Calculation**: Calculate the height of the tree.
- **Counting Nodes and Leaves**: Count the number of nodes and leaves in the tree.
- **Sum of Elements**: Calculate the sum of all elements in the BST.

## UML Diagram
```mermaid
    classDiagram
    class BSTNode {
        -data : T
        -left : BSTNode** 
        -right : BSTNode**
        +BSTNode()
        +BSTNode(data : T, left : BSTNode*, right : BSTNode*)
        +getData() T
        +setData(newData : const T) void
        +getRight() BSTNode**
        +setRight(node : BSTNode<T>*) void
        +getLeft() BSTNode**
        +setLeft(node : BSTNode<T>*) void
    }

    class BST {
        #root : BSTNode**
        +BST()
        +~BST()
        +clear() void
        +isEmpty() bool
        +height() int
        +countNodes() int
        +countLeaves() int
        +countInternalNodes() int
        +findMin() T
        +findMax() T
        +findSum() T
        +search(data : const T) bool
        +insert(data : const T) void
        +erase(data : const T) void
        +printBreadthFirst() void
        +printDepthFirst(orderBy : const string) void
        -findHeight(current : BSTNode<T>*) int
        -inOrder(current : BSTNode<T>* ) void
        -inOrder(current : BSTNode<T>*, action : string, result : T) void
        -preOrder(current : BSTNode<T>*) void
        -postOrder(current : BSTNode<T>*) void
    }

    BST "1" *-- "0..*" BSTNode : contains
    BSTNode <|-- BST : uses
```
