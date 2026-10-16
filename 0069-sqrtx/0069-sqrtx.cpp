class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long mid=s+(e-s)/2;
        long long ans=-1;

        while(s<=e){
            mid=s+(e-s)/2;
            long long square=mid*mid;

            if(square==x){
                return mid;
            }
            else if(square>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};