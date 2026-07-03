class Solution {
public:
    string trimTrailingVowels(string s) {
        
        int n=s.size();
        string s1=s;
        while(n>0){
            int i=n-1;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                s1.pop_back();
            }
            else break;
            n=s1.size();
        } return s1;
        
    }
};