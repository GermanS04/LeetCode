// Middle of the Linked List
// Difficult: Easy
// https://leetcode.com/problems/middle-of-the-linked-list/
// Runtime: 0 ms (beats 100.00%)
// Memory: 7.61 MB (beats 8.92%)

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
    ListNode* middleNode(ListNode* head) {
        int size = 0, mid = 0;

        ListNode* travel;
        travel = head;

        while(travel != NULL){
            size++;
            travel = travel->next;
        }

        mid = size / 2;
        travel = head;

        for(int i = mid; i > 0; i--){
            travel = travel->next;
        }

        return travel;
    }
};