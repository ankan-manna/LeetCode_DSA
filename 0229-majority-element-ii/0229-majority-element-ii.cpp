class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int ele1=INT_MIN,ele2=INT_MIN;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(c1==0 && nums[i]!=ele2){
                ele1=nums[i];
            }
             if(c2==0 && nums[i]!=ele1){
                ele2=nums[i];
            }
             if(nums[i]==ele1){
                c1++;
            }else if(nums[i]==ele2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1)
            cnt1++;
            else if(nums[i]==ele2)
            cnt2++;
        }
       // cout<<cnt1<<"c"<<cnt2;//->moore extended
        if(cnt1>nums.size()/3)
        ans.push_back(ele1);
        if(cnt2>nums.size()/3)
        ans.push_back(ele2);
        

        return ans;
    }
};