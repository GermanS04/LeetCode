// Convert Binary Number in a Linked List to Integer
// Difficult: Easy
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// Runtime: 0 ms (beats 100.00%)
// Memory: 8.58 MB (beats 20.84%)

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
    int getDecimalValue(ListNode* head) {
        ListNode* travel;
        travel = head;

        int size = 0, ans = 0;
        while(travel != NULL){
            size++;
            travel = travel->next;
        }

        travel = head;

        for(int i=size-1; i>=0; i--){
            ans += (travel->val) * pow(2,i);
            travel = travel->next;
        }

        return ans;
    }
};