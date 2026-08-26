class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        int i=0;
        while(l<=r){
            if(s[l]==s[r]) return l;
            l++;
            r--;
            
        } return -1;
    }
};