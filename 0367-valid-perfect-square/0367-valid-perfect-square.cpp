class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i = 1; i <= num; i++) {
            if(i * 1LL * i == num) {
                return true;
            }
            else if(i * 1LL * i > num) {
                return false;
            }
        }

        return false;
    }
};