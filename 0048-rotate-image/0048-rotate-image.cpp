class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       // vector<vector<int>v(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){//cheak condition
               swap(matrix[i][j],matrix[j][i]);//transpose
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};