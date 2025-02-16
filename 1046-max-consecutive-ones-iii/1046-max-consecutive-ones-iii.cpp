class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,zero=0,len=0;
        while(r<nums.size()){
            if(nums[r]==0) zero++;
            if(zero<=k){
                len=max(len,r-l+1);
            }
            if(zero>k){
                while(zero>k){
                    if(nums[l]==0) zero--;
                    l=l+1;
                }
            }
            r=r+1;
        }
        return len;
    }
};