class Solution {
public:
    int countCommas(int n) {
        int count1 = 0;

        for(int i = 1000; i <= n; i++) {
            int temp = i;
            int digits = 0;

            while(temp > 0) {
                temp /= 10;
                digits++;
            }

            count1 += (digits - 1) / 3;
        }

        return count1;
    }
};