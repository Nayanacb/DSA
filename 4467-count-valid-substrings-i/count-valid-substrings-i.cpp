class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans=0;
        int n=s.length();
        int r=0;
        int l=0;
       while(r<n){
        if(r>=2 && s[r]=='c'  && s[r-2]=='a' && s[r-1]=='b'){
            l=r-1;
        }
         ans+=r-l+1;
        r++;

       } return ans;
        
    }
};