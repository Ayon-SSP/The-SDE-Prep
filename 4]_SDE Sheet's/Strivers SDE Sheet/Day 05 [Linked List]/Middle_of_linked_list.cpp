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
    ListNode *middleNode(ListNode *head) {
        ListNode *slow = head;
        while (head && head->next) {
            slow = slow->next;
            head = head->next->next;
        }
        return slow;
    }
};