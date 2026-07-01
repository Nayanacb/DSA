class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0;
        int el1=INT_MIN;
        int cnt2=0;
        int el2=INT_MIN;
        int x=n/3;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=el2){
                el1=nums[i];
                cnt1++;
            }
            else if(cnt2==0 && nums[i]!=el1){
                el2=nums[i];
                cnt2++;
            }
            else if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
            
        
        } 
        int f1=0;
        int f2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1) f1++;
            if(nums[i]==el2) f2++;
        }
        if(f1>x) ans.push_back(el1);
        if(f2>x) ans.push_back(el2);
        return ans;
    }
};