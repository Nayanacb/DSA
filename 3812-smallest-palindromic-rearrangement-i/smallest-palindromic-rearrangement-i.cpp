class Solution {
public:
    string smallestPalindrome(string s) {
        string ans;
       int n=s.size() ;
       if(n==1) ans=s;
       else{
       string sub=s.substr(0,n/2);
       sort(sub.begin(), sub.end());
       ans.append(sub);
       reverse(sub.begin(), sub.end());
       if(n%2!=0) ans.push_back(s[n/2]);
       ans.append(sub);}
       return ans;
    }
};