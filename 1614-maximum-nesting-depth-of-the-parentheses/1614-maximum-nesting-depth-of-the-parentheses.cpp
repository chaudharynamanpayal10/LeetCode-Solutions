class Solution {
public:
    int maxDepth(string s) {
         stack<char>st;
   int count=0,maxCount=INT_MIN;
  for(int i=0;i<s.length();i++){
    if(s[i]=='('){
      count++;
    }
    if(s[i]==')'){
      count--;
    }
    maxCount=max(maxCount,count);
  }
  return maxCount;
    }
};