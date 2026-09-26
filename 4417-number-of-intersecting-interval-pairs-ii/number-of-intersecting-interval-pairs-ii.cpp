class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        long long cnt=0;
        for(int i=0;i<n;i++){
            int low=i+1;
            int high=n-1;
            int ans=i;
            while(low<=high){
                int mid=low+(high-low)/2;
                int curr=intervals[i][1];
                if(curr>=intervals[mid][0]){
                    low=mid+1;
                    ans=mid;
                }
                else{
                    high=mid-1;
                    
                }
            }
            cnt+=(long long)ans-i;
        } return cnt;
    }
};