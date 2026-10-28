class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int count =0;

        for(int i=0; i<n1; i++){
            int element = arr1[i];
            int flag = true;
            for(int j=0; j<n2; j++){
                if(abs(element - arr2[j]) <= d){
                    flag = false;
                    break;
                }
            }
            if(flag)
            count++;
        }
        return count;
    }
};