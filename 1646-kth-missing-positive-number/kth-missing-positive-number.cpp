class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=0;
        int ans=0;
        int n=arr.size();
        unordered_map<int, int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int high=arr[n-1]+k;
        int low=1;

        for(int i=1;i<=high;i++){
            if(mp.count(i)==0){
                cnt++;
                if(cnt==k) ans=i;
            }
        
            
        }
        return ans;
    }
};