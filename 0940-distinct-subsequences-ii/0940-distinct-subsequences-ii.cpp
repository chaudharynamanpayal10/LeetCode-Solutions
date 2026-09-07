class Solution {
public:
    int distinctSubseqII(string s) {
        const int mod = 1e9+7;
        vector<int>dp(26,0);

        for(char ch : s){
            int index = ch - 'a';

        int total = 0;
        for(int i=0; i<26; i++){
            total = (total + dp[i])%mod;
        }
        dp[index]=(total+1)%mod;
    }
    int ans =0;
    for(int i=0; i<26; i++){
        ans = (ans+dp[i])%mod;
    }
    return ans;
    }
};