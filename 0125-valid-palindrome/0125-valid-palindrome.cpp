class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>ans;
        if(s.size()==0){
            return true;
        }

        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])) {
            ans.push_back(tolower(s[i]));
        }
        }
        vector<char>v;
        for(int i=ans.size()-1; i>=0; i--){
            v.push_back(ans[i]);
        }

        for(int i=0; i<ans.size(); i++){
                if(ans[i] != v[i]){
                    return false;
                }
        }
        return true;
    }
};