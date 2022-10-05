/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val = node->next->val;
        node->next = node->next->next;

        // To delete a node, we just make the next pointer point to the node after it 
        // As it is clearly mentioned in the question :- Note that by deleting the node, we do not mean removing it from memory.
        
    }
};