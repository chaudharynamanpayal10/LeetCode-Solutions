class Solution {
public:
    int removeElement(vector<int>& nums, int k) {
      vector<int>temp(nums.size());
      int count=0;
      for(int i=0; i<nums.size(); i++){
         if(nums[i] != k) {
                nums[count] = nums[i];
                count++;
            }
      }
       return count;
    }
};