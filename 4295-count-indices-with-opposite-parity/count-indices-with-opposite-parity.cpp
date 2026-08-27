class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {

        int n = nums.size();
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            int cnt = 0;

            for (int j = i + 1; j < n; j++) {

                if((nums[i]%2==1 && nums[j]%2==0) || (nums[i]%2==0 && nums[j]%2==1)) cnt++;
            }
            temp.push_back(cnt);
        } return temp;
    }
};