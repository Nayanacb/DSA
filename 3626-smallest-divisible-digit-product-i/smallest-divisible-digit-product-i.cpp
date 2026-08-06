class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n;
        int fp=1;
        int p=1;
        while (fp % t != 0) {
            p=1;
            n = num;
            while (n > 0) {
                 p *= n % 10;
                n = n / 10;
            }
            fp=p;
            if(p%t==0) break;
            
            num++;
        } return num;
    }
};