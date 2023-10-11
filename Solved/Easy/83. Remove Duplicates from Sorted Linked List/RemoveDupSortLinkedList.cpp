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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode *travel = head, *prev, *guarda;

        guarda = travel;

        if(head == NULL){
            return head;
        }else if(travel->next == NULL){
            return head;
        }

       while(travel != NULL){
           if(travel->val != guarda->val){
               guarda->next = travel;
               guarda = travel;
           } else {
               travel = travel->next;
           }  

           if(travel != NULL){
               prev = travel;
           }

           if(prev->next == NULL){
                guarda->next = NULL;
           } 

           delete prev;
        }

        return head;
    }
};