class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int total=0;
        int l=0;
        int n=cardPoints.size();
        int r=n-k-1;
        for(int i=0;i<n;i++){
            total+=cardPoints[i];
        }
        if(n==k) return total;
        for(int i=l;i<=r;i++){
            sum+=cardPoints[i];
            
        }
        int mini=INT_MAX;
        while(r<=n-1){
            mini=min(mini, sum);
            sum-=cardPoints[l];
            l++;
            r++;
            if(r<n) sum+=cardPoints[r];
            
        }
        
        
        return total-mini;
    }
};