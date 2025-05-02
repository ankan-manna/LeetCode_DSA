class Solution {
public:
    void solve(vector<vector<char>>& grid,int i,int j,int r,int c,vector<vector<int>>& vis){
        if(i>=r || j>=c) return;
        if(grid[i][j]==0) return;
        vis[i][j] = 1;
        int nr = i;
        int nc = j+1;
        if((nr<r && nc<c) && (grid[nr][nc]=='1' && vis[nr][nc]==0)){
            solve(grid,nr,nc,r,c,vis);
        }
        nr = i+1;
        nc = j;
        if((nr<r && nc<c) && (grid[nr][nc]=='1' && vis[nr][nc]==0)){
            solve(grid,nr,nc,r,c,vis);
        }
        nr = i;
        nc = j-1;
        if((nr<r && nc>=0) && (grid[nr][nc]=='1' && vis[nr][nc]==0)){
            solve(grid,nr,nc,r,c,vis);
        }
        nr = i-1;
        nc = j;
        if((nr>=0 && nc<c) && (grid[nr][nc]=='1' && vis[nr][nc]==0)){
            solve(grid,nr,nc,r,c,vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int c1 = 0;
        vector<vector<int>> vis(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    c1++;
                    solve(grid,i,j,r,c,vis);
                }
            }
        }
        return c1;
    }
};