class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int bottom= m-1;
        int right=n-1;
        int left=0;
        while(bottom>=top && right>=left){
            for(int j=left;j<=right;j++ ){
                ans.push_back(matrix[top][j]);
            }
            for(int i=top+1;i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            if(top<bottom){
            for(int j=right-1;j>=left;j--){
                ans.push_back(matrix[bottom][j]);
            }}
            if(right>left){
            for(int i=bottom-1;i>top;i--){
                ans.push_back(matrix[i][left]);
            }}
            top++;
            bottom--;
            left++;
            right--;
        } return ans;
    }
};