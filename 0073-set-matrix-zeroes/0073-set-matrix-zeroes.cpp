class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 )
                v.push_back({i,j});
            }
        }

        for(pair<int,int> x: v){
            int r=x.first;
            int c=x.second;

            for(int i=0;i<m;i++)
            matrix[i][c]=0;

            for(int j=0;j<n;j++)
            matrix[r][j]=0;
        }
    }
};