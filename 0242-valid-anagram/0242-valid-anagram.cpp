class Solution {
public:
    bool isAnagram(string a, string b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(a!=b){
            return false;
        }
        return true;
        
    }
};