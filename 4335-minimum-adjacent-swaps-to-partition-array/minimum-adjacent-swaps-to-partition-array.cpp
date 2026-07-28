class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int n=nums.size();
       
        long long count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<a) nums[i]=0;
            else if(nums[i]>=a && nums[i]<=b) nums[i]=1;
            else nums[i]=2;
        }
        
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) {
                cnt0++;
                count+= cnt1+cnt2;}
            else if(nums[i]==1){
                cnt1++;
                count+=cnt2;
            }
            else { cnt2++;}

        }
       return count%1000000007;
        } 
        

    };
