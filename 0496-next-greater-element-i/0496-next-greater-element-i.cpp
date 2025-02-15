class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>NGE(nums2.size());
        vector<int>v;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) NGE[i]=-1;
            else NGE[i]=st.top();
           st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
           int ele=nums1[i];
           for(int j=0;j<nums2.size();j++){
              if(nums2[j]==ele){
                v.push_back(NGE[j]);
                break;
              }
           } 
        }
        return v;
    }
};