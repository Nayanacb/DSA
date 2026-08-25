class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_set<int> mset(nums.begin(), nums.end());
        int multiple=k;
        while(mset.count(multiple)){
            multiple+=k;
        } return multiple;
    }
};