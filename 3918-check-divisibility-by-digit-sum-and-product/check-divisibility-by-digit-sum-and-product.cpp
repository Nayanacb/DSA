class Solution {
public:
    bool checkDivisibility(int n) {
        int ds=0;
        int dp=1;
        int ans=0;
        int og=n;
        if(n/10==0) return false;
        while(n>0){
            int i=n%10;
            ds+=i;
            dp*=i;
            n=n/10;
        }
        if(og%(ds+dp)==0) return true;
        return false;
    }
};