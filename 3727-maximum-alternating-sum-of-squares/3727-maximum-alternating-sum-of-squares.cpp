class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
             return abs(a) < abs(b);
        });

        vector<int> v;
        long long score = 0;
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left <= right) {
            if (left < right) {
                v.push_back(nums[right--]);
                v.push_back(nums[left++]);
            } else {
                v.push_back(nums[left++]);
            }
        }

        for (int i = 0; i < v.size(); i++) {
            if (i % 2 == 0) {
                score += 1LL * v[i] * v[i];
            } else {
                score -= 1LL * v[i] * v[i];
            }
        }

        return score;
    }
};