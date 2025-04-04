class Solution {
public:
    // int solve(int n){
    //     if(n==1||n==0) return 1;
    //   return solve(n-1);

    // }
    int numTrees(int n) {
        if(n==0 || n==1) return 1;
        int cnt=0;
      for(int i=0;i<n;i++){
        cnt=cnt+(numTrees(i)*numTrees(n-1-i));
      }
      return cnt;
    }
};