class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()!=s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            if(st.empty()){
                count++;
            }
        }
        return count;
    }
};