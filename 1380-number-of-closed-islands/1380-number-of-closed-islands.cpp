class Solution {
public:
    bool solve(vector<vector<int>>& grid,int i,int j,int r,int c,vector<vector<int>>& vis,int row[],int col[]){
        vis[i][j] = 1;
        int nr=0,nc=0;
       bool flag=true;
        if(i==0 || j==0 || i==r-1 || j==c-1) flag = false;
        for(int k=0;k<4;k++){
            nr=i+row[k];
            nc=j+col[k];
            if(nr>=0 && nc>=0 && nr<r && nc<c  ){
                if( grid[nr][nc]==0 && vis[nr][nc]==0){
                  flag= solve(grid,nr,nc,r,c,vis,row,col)&& flag;
                }
            }
        }

        return flag;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int c1 = 0;
        int row[]={1,0,-1,0};
        int col[]={0,1,0,-1};
        vector<vector<int>> vis(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0 && vis[i][j]==0){
                   
                  if(  solve(grid,i,j,r,c,vis,row,col)){
                    c1++;
                  }
                }
            }
        }
       return c1; 
    }
};