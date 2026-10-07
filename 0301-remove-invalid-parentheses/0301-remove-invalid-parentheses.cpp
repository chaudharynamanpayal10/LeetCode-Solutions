class Solution {
public:
    vector<string> ans;

    void solve(string &s, int i, int left, int right,
               int open, string &curr) {

        if(i == s.size()) {
            if(left == 0 && right == 0 && open == 0)
                ans.push_back(curr);
            return;
        }

        // Remove current bracket
        if(s[i] == '(' && left > 0) {
            solve(s, i + 1, left - 1, right, open, curr);
        }

        if(s[i] == ')' && right > 0) {
            solve(s, i + 1, left, right - 1, open, curr);
        }

        // Keep current character
        if(s[i] == '(') {
            curr.push_back('(');

            solve(s, i + 1, left, right, open + 1, curr);

            curr.pop_back();
        }
        else if(s[i] == ')') {

            if(open > 0) {
                curr.push_back(')');

                solve(s, i + 1, left, right, open - 1, curr);

                curr.pop_back();
            }
        }
        else {
            curr.push_back(s[i]);

            solve(s, i + 1, left, right, open, curr);

            curr.pop_back();
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int left = 0, right = 0;

        for(char c : s) {

            if(c == '(') {
                left++;
            }
            else if(c == ')') {

                if(left > 0)
                    left--;
                else
                    right++;
            }
        }

        string curr = "";

        solve(s, 0, left, right, 0, curr);

        // Remove duplicate answers
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};