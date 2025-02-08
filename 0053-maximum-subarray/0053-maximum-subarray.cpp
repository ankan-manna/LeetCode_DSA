class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,st=-1,nd=-1,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(sum==0) st=i;//to find start
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0)
            sum=0;
            nd=i;// to find end
        }
        return maxi;
    }
};