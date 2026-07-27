class Solution {
public:
    int maxProduct(int n) {
        int digit=0;
        vector<int> arr;
        while(n>0){
            arr.push_back(n%10);
            
            n/=10;
        }
        sort(arr.begin(), arr.end());
        int s=arr.size();
        return arr[s-1]*arr[s-2];
        

    }
};