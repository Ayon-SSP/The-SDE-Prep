/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Method - 1: Using two Stacks

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        
        if (root == NULL)
            return postorder;
        
        stack<TreeNode*> st1, st2;
        
        st1.push(root);
        
        while (!st1.empty()) {
            root = st1.top();
            
            st1.pop();
            
            st2.push(root);
            
            if (root->left != NULL)
                st1.push(root->left);
            if (root->right != NULL)
                st1.push(root->right);
                     
        }
        
        while (!st2.empty()) {
            postorder.push_back(st2.top() -> val);
            st2.pop();
            
        }
        
        return postorder;
        
    }
};

// Method - 2: Using single stack

class Solution {
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorder;
        
        TreeNode* cur = root;
        stack<TreeNode*> st;
        
        while (cur != NULL || !st.empty())
        {
            if (cur != NULL)
            {
                st.push(cur);
                cur = cur -> left;
            }
            
            else
            {
                TreeNode* temp = st.top() -> right;
                
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    
                    postorder.push_back(temp->val);
                    while (!st.empty() && temp == st.top() -> right)
                    {
                        temp = st.top();
                        st.pop();
                        
                        postorder.push_back(temp->val);
                        
                    }
                    
                }
                
                else 
                    cur = temp;
            }
        }
        
        return postorder;
        
        
    }
};