// Delete the Middle Node of a Linked List
// Difficulty: Easy
// https://leetcode.com/problems/delete-middle-node-of-a-linked-list/
// Runtime: 614 ms (beats 57.56%)
// Memory: 295.30 MB (beats 7.40%)

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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL){
            return head;
        } else if (head->next == NULL){
            head = NULL;
            return head;
        }

        ListNode *travel = head;
        int size = 0;

        while(travel){
            travel = travel->next;
            size++;
        }

        int middle = size / 2;
        travel = head;

        for(int i = 0; i < middle - 1; i++){
            travel = travel->next;
        }

        if (travel->next->next != NULL){
            travel->next = travel->next->next;
        } else {
            travel->next = NULL;
        }

        return head;

    }
};

