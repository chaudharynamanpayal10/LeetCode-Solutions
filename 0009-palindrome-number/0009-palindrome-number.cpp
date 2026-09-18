class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)){
            return false;
         }
        long long rev=0;
        int n = x;
        while(x>0){
            int d=x%10;
            rev = rev*10+d;
            x=x/10;
            }
            return n== rev;
         }
         
};