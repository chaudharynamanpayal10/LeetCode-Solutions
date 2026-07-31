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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        vector<int>v;
        stack<int>s;

        ListNode* curr=head;

        while(curr){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        for(int i=ans.size()-1; i>=0; i--){
            if(s.size()<=0){
                v.push_back(0);
            }
            else if(s.size()>0 && s.top()>ans[i]){
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<=ans[i]){
                while(!s.empty() && s.top()<=ans[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(0);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(ans[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};