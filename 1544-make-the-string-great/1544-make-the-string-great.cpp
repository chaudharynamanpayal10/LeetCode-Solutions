class Solution {
public:
    string makeGood(string s) {
        string result = "";

        for(int i=0; i<s.size(); i++){
            if(result.length()>0){
                char last = result[result.length()-1];
                if(last + 32 == s[i] || last - 32 == s[i]){
                     result.pop_back();
                    continue;
                }
            }
            result += s[i];
        }
        return result;
    }
};