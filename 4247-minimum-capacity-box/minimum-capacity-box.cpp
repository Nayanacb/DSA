class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mini=INT_MAX;
        int ans=INT_MAX;
        int pos=-1;
       
        int n= capacity.size();
        for(int i=0;i<n;i++){
            if(capacity[i]==mini) continue;
            if(capacity[i]>=itemSize){
                
                ans=capacity[i];
                mini=min(ans,mini);
                if(mini==ans ) {
                    pos=i;
            }
        }
        }return pos;
    } 
};