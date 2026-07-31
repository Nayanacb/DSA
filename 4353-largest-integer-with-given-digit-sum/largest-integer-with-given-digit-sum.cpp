class Solution {
public:
    int largestInteger(int n, int s) {
        int a=pow(10,n) -1;
        int ans=-1;
        
        if(s> 9*n) ans=-1;
      
        else if(s==0) ans=0;
        else{
            for(int i=a;i>0;i--){
                int temp=i;
                int sum=0;
                while(temp>0){
                    sum+=temp%10;
                    temp/=10;
                }
                if(sum==s){
                    ans=i;
                    break;
                }
            }
        } return ans;
    }
};