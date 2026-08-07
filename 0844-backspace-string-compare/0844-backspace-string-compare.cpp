class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;

        for(int i=0; i<s.size(); i++){
            if(st1.empty()){
                if(s[i]!='#'){
                st1.push(s[i]);

                }
            }
            else if(!st1.empty()){
                if(s[i]!='#'){
                    st1.push(s[i]);
                }
                else{
                    st1.pop();
                }
            }
        }
           for(int i=0; i<t.size(); i++){
            if(st2.empty()){
                    if(t[i]!='#'){
                st2.push(t[i]);

                }
            }
            else if(!st2.empty()){
                if(t[i]!='#'){
                    st2.push(t[i]);
                }
                else{
                    st2.pop();
                }
            }
        }
        if(st1 == st2){
            return true;
        }

        return false;
    }
};