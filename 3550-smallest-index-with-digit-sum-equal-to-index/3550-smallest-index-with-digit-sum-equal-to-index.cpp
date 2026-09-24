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
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            if(i == sum(nums[i])){
                return i;
            }
        }
       /*int mini = v[0];
        for(int i=0; i<v.size(); i++){

            mini = min(mini,v[i]);
        }

         int index =-1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == mini){
                int index = i;
                break;
            }
        } */
        return -1;
    }
};