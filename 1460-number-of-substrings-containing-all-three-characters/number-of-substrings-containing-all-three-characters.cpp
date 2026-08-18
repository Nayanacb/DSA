class Solution {
public:
    int numberOfSubstrings(string s) {
        int r = 0;
        int l = 0;
        long long n = s.size();
        int a = 0;
        int b = 0;
        int c = 0;
        int cnt = 0;
        long long total = (n * (n + 1)) / 2;
        while (r < n) {
            if (s[r] == 'a')
                a++;
            else if (s[r] == 'b')
                b++;
            else if (s[r] == 'c')
                c++;
            while (a >= 1 && b >= 1 && c >= 1) {
                if (s[l] == 'a')
                    a--;
                else if (s[l] == 'b')
                    b--;
                else if (s[l] == 'c')
                    c--;
                l++;
            }
            if(a==0 || b==0|| c==0) cnt+=r-l+1;
            if(r<n) r++;
        }
        return total-cnt;
    }
};