class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string s1=s;
        sort(s1.begin(), s1.end());
        char min=s1[0];
        char max=s1[n-1];
        int ans=0;
        int cnt1 = count(s.begin(), s.end(), min);
        int cnt2 = count(s.begin(), s.end(), max);
        if(s1==s) ans=0;
        else if(n==2) ans=-1;
        else if(n>2){
            if(s[0]==max && s[n-1]==min && cnt1==cnt2 && cnt1==1) ans=3;
            else if(s[0]==min || s[n-1]==max) ans=1;
            else ans=2;
        }
       
        return ans;
    }
};