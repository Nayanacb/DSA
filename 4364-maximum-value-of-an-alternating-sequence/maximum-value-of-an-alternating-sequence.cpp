class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        int j=(n-2)/2;
        long long ans=0;
        
        if(n==1) ans= s;
        else {
            ans=s+m+(long long) (m-1)*j;
        }
        return ans;

    }
};