class Solution {
public:
    int countValidPrefixes(string s) {
        int n=s.size();
        int ans=0;
        for(int i=1;i<=n;i++){
            int j=0;
            int ones=0;
            int zeros=0;
            string k=s.substr(j, i);
            int m=k.size();
            
            for(int l=0;l<m;l++){
                if(s[l]=='0') zeros++;
                else ones++;
            }
            if(ones==zeros+1 || zeros==ones+1||zeros==ones) ans++;

        }
        return ans;
    }
};