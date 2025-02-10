class Solution {
public:
void solve(vector<int>&arr,int n,vector<vector<int>>&ans,int st){
      if(st>=n){
          ans.push_back(arr);
          return;
      }
      unordered_set<int>used;
      for(int i=st;i<n;i++){
        if(used.find(arr[i])!=used.end()) continue;
        used.insert(arr[i]);
          swap(arr[st],arr[i]);
          solve(arr,n,ans,st+1);
          swap(arr[st],arr[i]);
      }
  }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        solve(nums,n,ans,0);
        return ans;
    }
};