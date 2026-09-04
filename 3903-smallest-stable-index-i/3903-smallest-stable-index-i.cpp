class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
         int maxi = nums[0];
        for(int i=0; i<n; i++){

             maxi = max(maxi, nums[i]);

            int mini = nums[i];

            for (int j = i; j < n; j++) {
                mini = min(mini, nums[j]);
            }

            int score = maxi - mini;

            if(score <= k){
                return i;
            }
        }
        return -1;
    }
};