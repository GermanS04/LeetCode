// Add Two Numbers
// Difficulty: Medium
// https://leetcode.com/problems/add-two-numbers/
// Runtime: 18 ms (beats 83.81%)
// Memory: 71.70 MB (beats 28.80%)

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit1, digit2, digitAns, carry=0, sum;
        ListNode *container;

        container = new ListNode(0);
        ListNode *tail;
        tail = container;

        while(l1 != NULL || l2 != NULL || carry != 0){
            if(l1 != NULL){
                digit1 = (l1->val);
                l1 = l1->next;
            } else {
                digit1 = 0;
            }

            if(l2 != NULL){
                digit2 = (l2->val);
                l2 = l2->next;
            } else {
                digit2 = 0;
            }

            sum = (digit1 + digit2 + carry);
            digitAns = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digitAns);
            tail->next = newNode;
            tail = tail->next;
        }

        ListNode* ans = container->next;
        delete container;

        return ans;

    }
};