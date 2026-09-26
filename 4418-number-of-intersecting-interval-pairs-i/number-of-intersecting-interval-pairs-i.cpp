class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        int n=arr.size();
        int cnt=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i][1]>=arr[j][0] && arr[i][0]<=arr[j][0]){
                    cnt++;
                }
            }
        } return cnt;
    }
};