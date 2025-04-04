class Solution {
    
public:
    // int solve(int n){
    //     if(n==1||n==0) return 1;
    //   return solve(n-1);

    // }=> why not we call solve ===> when we call like that
    /*
for(int i=0;i<n;i++){
    cnt+=solve(i)*solve(n-1-i);
}
n=10
i=0 => s(0)*s(9)==> for 9 further we need another loop for(i=0;i<9;i++)
which is not possible by calling solve 
    */

    int solve(int n,vector<int>&dp){
         if(n==0 || n==1) return dp[n]=1;
        if(dp[n]!=-1) return dp[n];
        int cnt=0;
      for(int i=0;i<n;i++){
        cnt=cnt+(solve(i,dp)*solve(n-1-i,dp));
        
      }
      return dp[n]=cnt;
    }
    int numTrees(int n) {
       vector<int>dp(n+1,-1);
       return solve(n,dp);
    }
};