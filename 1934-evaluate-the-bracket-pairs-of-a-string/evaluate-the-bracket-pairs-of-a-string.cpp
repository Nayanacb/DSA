class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        vector<string> hold;
        int n=s.size();
         map<string, string> mp2;
        for(int i=0;i<knowledge.size();i++){
            mp2[knowledge[i][0]]=knowledge[i][1];
        }
       string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
              int ind=i+1;
              string temp="";
              while(s[ind]!=')'){
                temp+=s[ind];
                ind++;
              }
              if(mp2.count(temp)){
                ans.append(mp2[temp]);
              }
              else ans+='?';
              i=ind;
            }
            else{
                ans+=s[i];
            }
            
          
        } return ans;
        
    }
};