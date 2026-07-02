class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map <int, int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int x= target-nums[i];
            if(mp.find(x)!=mp.end() && mp[x]!=i){
                ans.push_back(i);
                ans.push_back(mp[x]);
                break;
            }
        }
        return ans;
    }
};