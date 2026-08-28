class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());
        vector<int> ans;

        for (int nums : nums2) {
            if (st.find(nums) != st.end()) {
                ans.push_back(nums);
                st.erase(nums); 
            }
        }
        return ans; 
        
    }
};