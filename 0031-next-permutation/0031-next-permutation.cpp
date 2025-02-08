class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ch=-1,nxtGreater=INT_MAX,idx=-1;
       for(int i=0;i<n-1;i++){
        if(nums[i]<nums[i+1])
            ch=i;
       }

       if(ch==-1){
        reverse(nums.begin(),nums.end());
        return;
       }else{
        int x=nums[ch];
        for(int i=ch+1;i<n;i++){
            if(nums[i]>x && nums[i]<nxtGreater ){
            nxtGreater=nums[i];
            idx=i;
            }
        }
        int temp=nums[ch];
        nums[ch]=nums[idx];
        nums[idx]=temp;

        sort(nums.begin()+ch+1,nums.end());
       }
    }
};