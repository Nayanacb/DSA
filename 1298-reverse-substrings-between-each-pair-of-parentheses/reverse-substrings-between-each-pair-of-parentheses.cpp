class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        int n=s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) {
                ans+=s[i];

        }
        else if(s[i]=='('){
            st.push(ans.size());
        }
        else{
            if(!st.empty()){
            reverse(ans.begin()+st.top(), ans.end());
            st.pop();}
        }
    } return ans;
    }
};