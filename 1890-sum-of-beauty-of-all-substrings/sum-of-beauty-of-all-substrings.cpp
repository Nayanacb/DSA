class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int beauty=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int maxi=0;
                int mini=INT_MAX;
                vector<int> freq(26, 0);
                for(int k=i;k<=j;k++){
                    int a= ++freq[s[k]-'a'];
                    maxi=max(maxi, a);
                    
                }
                for(int k=0;k<26;k++){
                    if(freq[k]>0) mini=min(mini, freq[k]);
                }
                beauty+=maxi-mini;
            }
        } return beauty;
    }
};