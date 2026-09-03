class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        bool odd=false;
        bool even=false;
        sort(nums1.begin(), nums1.end());
        if(nums1[0]%2==0){
            even=true;
        }
        else odd=true;
        int minodd=INT_MAX;
        int mineven=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums1[i]<minodd && nums1[i]%2==1) minodd=nums1[i];
            if(nums1[i]<mineven && nums1[i]%2==0) mineven=nums1[i];
        }
        for(int i=1;i<n;i++){
            if((nums1[i]%2==0 && even) || (nums1[1]%2==1 && odd)){
                continue;
            }
            else{
                if(nums1[i]%2==0){
                    if(odd){
                    if(nums1[i]-minodd<1) return false;}
                    
                }
                else{
                    if(nums1[i]-minodd<1) return false;
                }
            }
        } return true;
    }
};