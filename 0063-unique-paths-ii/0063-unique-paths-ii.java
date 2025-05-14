class Solution {
    private int solve(int r,int c,int [][]grid ,int m,int n,int [][]vis,int [][]dp){
        if(r==m-1 && c==n-1){
            return 1;
        }
        if(dp[r][c]!=-1) return dp[r][c];
        vis[r][c]=0;
        int down=0,right=0;
        int nr=-1,nc=-1;
        //down
        nr=r+1;
        nc=c;
        if(nr<m && nc<n && vis[nr][nc]==-1 && grid[nr][nc]==0){
            down+=solve(nr,nc,grid,m,n,vis,dp);
        }
        //right
        nr=r;
        nc=c+1;
        if(nr<m && nc<n && vis[nr][nc]==-1 && grid[nr][nc]==0){
            right+=solve(nr,nc,grid,m,n,vis,dp);
        }
        vis[r][c]=-1;
        return dp[r][c]=down+right;

    }
    public int uniquePathsWithObstacles(int[][] Grid) {
        int m=Grid.length;
        int n=Grid[0].length;
        if (Grid[0][0] == 1 || Grid[m - 1][n - 1] == 1) return 0;
         int [][]vis=new int[m][n];
        for(int i=0;i<m;i++){
            int []row=vis[i];
            Arrays.fill(row,-1);
        }
        int [][]dp=new int[m][n];
        for(int i=0;i<m;i++){
            int []row=dp[i];
            Arrays.fill(row,-1);
        }
        return solve(0,0,Grid,m,n,vis,dp);
    }
}