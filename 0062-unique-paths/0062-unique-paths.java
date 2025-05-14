class Solution {
    private int solve(int r,int c,int m,int n,int [][]vis,int [][]dp){
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
        if(nr<m && nc<n && vis[nr][nc]==-1){
            down+=solve(nr,nc,m,n,vis,dp);
        }
        //right
        nr=r;
        nc=c+1;
        if(nr<m && nc<n && vis[nr][nc]==-1){
            right+=solve(nr,nc,m,n,vis,dp);
        }
        vis[r][c]=-1;
        return dp[r][c]=down+right;

    }
    public int uniquePaths(int m, int n) {
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
        return solve(0,0,m,n,vis,dp);
    }
}