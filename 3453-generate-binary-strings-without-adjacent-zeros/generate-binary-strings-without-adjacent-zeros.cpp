class Solution {
public:
    void fxn(int ind, int prev, int n,string s, vector<string> &ans){
        if(ind==n){
            ans.push_back(s);
            return;
        }
        s.push_back('1');
        fxn(ind+1,1, n, s, ans);
        s.pop_back();
        if(ind==0){
            s.push_back('0');
            fxn(ind+1, 0, n, s, ans);
            s.pop_back();
        }
        if( prev==1){
            s.push_back('0');
            fxn(ind+1, 0, n, s, ans);
            s.pop_back();
        } 
        return;
        

    }
    vector<string> validStrings(int n) {
        string s;
        vector<string> ans;
        fxn(0, 0, n, s, ans);
        return ans;
    }
};