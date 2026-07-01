class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=n/2;
        int ans=0;
        map <int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>x){
                ans=nums[i];
                break;
            }
        } return ans;
    }
};