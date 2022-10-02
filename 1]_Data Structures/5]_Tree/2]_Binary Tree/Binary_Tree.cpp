#include <iostream>

using namespace std;

struct BinaryTreeNode {
    int val;
    BinaryTreeNode *left, *right;
    
    BinaryTreeNode() {
        int val = 0;
        left = right = nullptr;
    }
    
    BinaryTreeNode(int val) : val(val) {
        left = right = nullptr;
    }
    
    BinaryTreeNode(int val, BinaryTreeNode *left, BinaryTreeNode *right) : val(val), left(left), right(right) {}
};

class BinaryTree {
public:
    BinaryTreeNode *head;
    
    BinaryTree() {
        head = new BinaryTreeNode(-1);
    }
    
    /*
    addLeft: create a new node with value val and make it the left node of head node.
    */
    BinaryTreeNode* addLeft(BinaryTreeNode *head, int val) {
        if(head == nullptr)
            return nullptr;
            
        return head->left = new BinaryTreeNode(val);
    }
    
    /*
    addRight: create a new node with value val and make it the right node of head node.
    */
    BinaryTreeNode* addRight(BinaryTreeNode *head, int val) {
        if(head == nullptr)
            return nullptr;
            
        return head->right = new BinaryTreeNode(val);
    }
    
    /*
    printInorderTraversal: prints inorder-traversal of the tree.
    */
    void printInorderTraversal() {
        printInorderUtil(head);
    }
    
    /*
    printPreOrderTraversal: prints preorder-traversal of the tree.
    */
    void printPreOrderTraversal() {
        printPreOrderUtil(head);
    }
    
    /*
    printPostOrderTraversal: prints postorder-traversal of the tree.
    */
    void printPostOrderTraversal() {
        printPostOrderUtil(head);
    }
    
private:
    void printInorderUtil(BinaryTreeNode *head) {
        if(head == nullptr)
            return;
        
        printInorderUtil(head->left);
        cout << head->val << ' ';
        printInorderUtil(head->right);
    }
    
    void printPreOrderUtil(BinaryTreeNode *head) {
        if(head == nullptr)
            return;
        
        cout << head->val << ' ';
        printPreOrderUtil(head->left);
        printPreOrderUtil(head->right);
    }
    
    void printPostOrderUtil(BinaryTreeNode *head) {
        if(head == nullptr)
            return;
        
        printPostOrderUtil(head->left);
        printPostOrderUtil(head->right);
        cout << head->val << ' ';
    }
};

int main() {
    BinaryTree bt;
    
    auto first = bt.addLeft(bt.head, 1);
    auto second = bt.addRight(bt.head, 2);
    
    bt.addLeft(first, 11);
    bt.addRight(first, 12);
    
    bt.addLeft(second, 21);
    bt.addRight(second, 22);
    
    bt.printInorderTraversal();
    cout << '\n';
    
    bt.printPreOrderTraversal();
    cout << '\n';
    
    bt.printPostOrderTraversal();
    cout << '\n';
}