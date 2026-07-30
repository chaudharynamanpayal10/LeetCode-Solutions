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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       vector<int>ans;
       ListNode*curr=head;

       while(curr){
        ans.push_back(curr->val);
        curr=curr->next;
       }
       int n = ans.size();

       reverse(ans.begin() + left - 1, ans.begin() + right);

       curr = head;
       int i = 0;

       while (curr) {
       curr->val = ans[i++];
       curr = curr->next;
    }

return head;

        }
        
};