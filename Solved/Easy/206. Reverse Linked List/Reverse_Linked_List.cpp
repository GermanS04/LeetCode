// Reverse Linked List
// Difficulty: Easy
// https://leetcode.com/problems/reverse-linked-list/
// Runtime: 3 ms (Beats 95.60%)
// Memory Usage: 8.3 MB (Beats 56.89%)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* forward;
        ListNode* prev = NULL;
        ListNode* curr=head;

        while (curr != NULL){
            forward = curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }

        return prev;
    }
};
