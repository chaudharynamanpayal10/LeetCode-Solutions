class Solution {
public:
    int sum(int& nums){
        int sum =0;
        while(nums!=0){
        int d = nums%10;
        sum+=d;
        nums/=10;
    }
    return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i == sum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};