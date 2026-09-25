class Solution {
public:
    vector<int> getRow(int ind) {
        int n=ind+1;
        vector<vector<int>> final;
        
        
        for(int i=0;i<=ind;i++){
            final.push_back(vector<int>(i+1, 0));
            for(int j=0;j<i+1;j++){
                
                if(j==0 || j==i) final[i][j]=1;
                else{
                     final[i][j]=final[i-1][j-1]+final[i-1][j];
                }
               
            }
            
        } return final[ind];

    }
};