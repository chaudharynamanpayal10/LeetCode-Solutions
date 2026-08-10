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
    void reorderList(ListNode* head) {
         if (head == NULL || head->next == NULL)
            return;

        ListNode* curr=head;

        while (curr != NULL && curr->next != NULL){
            ListNode* tail = curr;

        while(tail->next->next != NULL) {
               tail = tail->next;
            }
             // last node save karo
            ListNode* last = tail->next;

             // last node ko list se hatao
            tail->next = NULL;

              // last node ko curr ke baad lagao
            last->next = curr->next;
            curr->next = last;   

            curr = last->next; 
        }  
    }
};