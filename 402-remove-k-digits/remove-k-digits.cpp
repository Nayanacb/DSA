class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        string s;
        st.push(num[0]);
        if (k == n)
            return "0";
        for (int i = 1; i < n; i++) {
            while (!st.empty() && num[i]-'0' < st.top()-'0' && k > 0) {
                st.pop();
                
                k--;
            } 
                st.push(num[i]);
            
        }
        while(k>0){
            st.pop();
            k--;
        }
        while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());

        int pos = s.find_first_not_of('0');

        if (pos == string::npos)
            return "0";

        s = s.substr(pos);

        return s;
    }
};
