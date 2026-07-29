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
    ListNode* swapPairs(ListNode* head) {

        if(head==NULL || head->next == NULL){
            return head;
        }
        ListNode* curr=head,*prev=NULL;
        head=head->next;

        while(curr && curr->next){
            ListNode* front = curr->next;
            curr->next= front->next;
            front->next = curr;
             
             if (prev != NULL)
                prev->next = front;

            // Move pointers
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};