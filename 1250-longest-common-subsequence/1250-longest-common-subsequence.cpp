class Solution {
public:
  int  solve(int i,int j,string& s1,string& s2,string& str,vector<vector<int>>&dp){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];

        if(s1[i]==s2[j]){
            str+=s1[i];
            return dp[i][j]= 1+solve(i-1,j-1,s1,s2,str,dp);
        }
        return dp[i][j]=max(solve(i-1,j,s1,s2,str,dp),solve(i,j-1,s1,s2,str,dp));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        string str="";
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       int ans= solve(m-1,n-1,text1,text2,str,dp);
       cout<<str;
       return ans;
    }
};