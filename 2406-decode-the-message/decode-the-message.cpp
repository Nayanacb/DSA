class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mp;
        vector<char> a(26);
        int index=0;
        iota(a.begin(),a.end(),'a');
        int n=message.size();
        int m=key.size();
        string ans;
        for(int i=0;i<m;i++){
            if(key[i]!=' ' && mp.count(key[i])==0){
                 mp[key[i]]=a[index];
            index++;
            }
           
        }
        for(int i=0;i<n;i++){
            if(message[i]==' ') ans.push_back(' ');
            else ans.push_back(mp[message[i]]);
        } return ans;

    }
};