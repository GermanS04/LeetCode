// Palindrome Linked List
// Difficulty: Easy
// https://leetcode.com/problems/palindrome-linked-list/
// Runtime: 278 ms (Beats 38.10%)
// Memory Usage: 128.6 MB (Beats 12.07%)

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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }

        fast = head;

        vector<int> h1,h2;

        while(slow != NULL){
            h1.push_back(fast->val);
            h2.push_back(slow->val);
            slow = slow->next;
            fast = fast->next;
        }

        int len=h2.size();
        for(int i = 0; i < h2.size(); i++){
            if(h1[i] != h2[len-1]){
                return false;
            }

            len -= 1;
        }

        return true;
    }
};