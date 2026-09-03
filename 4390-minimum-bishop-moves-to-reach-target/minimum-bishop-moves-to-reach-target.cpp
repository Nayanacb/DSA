class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int ans=0;
        if(source==target) return 0;
        else if(abs(source[0]-target[0])==abs(source[1]-target[1])) return 1;
        else if((source[0]+target[0])%2==(source[1]+target[1])%2) return 2;
        else{
            return -1;
        }
    }
};