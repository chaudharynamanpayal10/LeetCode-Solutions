class Solution {
public:
    int scoreOfParentheses(string s) {
        int count1=0;
        int count2=0;
        stack<char>st;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
                 count2++;
            }
            if(s[i]==')'){
                st.pop();
                
                if(s[i-1]=='('){
                    count1 += pow(2,st.size());
                }
                count2--;
            }
           
        }
        return count1;
    }
};