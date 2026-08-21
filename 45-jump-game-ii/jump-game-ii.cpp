class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int ops=0;
        int i=n-1;
        
        int ind=0;
        while(i>0){
            int mini=INT_MAX;
            int j=i-1;
            while(j>=0 ){
                if(nums[j]>= i-j){
                    ind=j;
                    mini=min(mini, ind);
                    
                    
                }
                
                j--;
                
            }
            ops++;
            i=mini;

        } return ops;
    }
};