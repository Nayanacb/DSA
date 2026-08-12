class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(i>maxi) {
                
                break;}
            if(maxi>=n-1){
                flag=true;
                break;
            }
            maxi=max(maxi, i+nums[i]);
            

        }
        return flag;
    }
};