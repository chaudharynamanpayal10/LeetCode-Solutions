class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        stack<int>s;
        int n=nums.size();
         if (n == 0) return {};

        for(int i=2*n-1; i>=0; i--){
            int idx = i % n;

                while(!s.empty() && s.top() <= nums[idx]){
                    s.pop();
                }
                  if (i < n) { 
                if (s.empty())
                    v.push_back(-1);
                else
                    v.push_back(s.top());
            }
            s.push(nums[idx]);

        }
        reverse(v.begin(),v.end());

        return v;
        
    }
};