class Solution {
private:
    void dfs(vector<vector<int>>&ans,int sr,int sc,int init,int row[],int col[],int color){
        ans[sr][sc]=color;
        int m=ans.size();
        int n=ans[0].size();
        for(int i=0;i<4;i++){
            int nr=sr+row[i];
            int nc=sc+col[i];
            if(nr>=0 && nr<m && nc>=0 && nc<n && ans[nr][nc]==init && ans[nr][nc]!=color){
                dfs(ans,nr,nc,init,row,col,color);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int row[]={1,0,-1,0};
        int col[]={0,1,0,-1};
        int init=image[sr][sc];
        dfs(ans,sr,sc,init,row,col,color);
        return ans;
    }
};