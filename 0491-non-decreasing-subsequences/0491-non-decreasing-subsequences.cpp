class Solution {
public:
    void subsequence(vector<int>&nums,int idx,vector<int>&ans,vector<vector<int>>&sol){
        if(ans.size()>=2){
            sol.push_back(ans);
        }
        unordered_set<int>set;
        for(int i=idx;i<nums.size();i++){
            if((ans.size()==0 || ans[ans.size()-1]<=nums[i]) && set.find(nums[i])==set.end()){
                set.insert(nums[i]);
                //if(nums[i-1]<=nums[i])
                ans.push_back(nums[i]);
                subsequence(nums,i+1,ans,sol);
                ans.erase(ans.begin()+i);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>sol;
        vector<int>ans;
        subsequence(nums,0,ans,sol);
        return sol;
    }
};