class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0; i<arr.size(); i++){
            int element = arr[i];
            for(int j=0; j<arr.size(); j++){
                if(i != j && element == 2*arr[j]){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};