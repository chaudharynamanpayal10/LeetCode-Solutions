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

         if(head == NULL || head->next == NULL)
            return NULL;
            
        vector<int>ans;

        ListNode* curr=head;

        while(curr!=NULL){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        int mid = ans.size()/2;
        curr=head;

        for(int i = 0; i < mid - 1; i++){
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};