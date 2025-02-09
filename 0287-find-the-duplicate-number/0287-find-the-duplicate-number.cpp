class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int n;
        for(auto x:nums){
            if(m.find(x)==m.end()){
                m[x]=1;
            }
            else
            n= x;
        }
        return n;
    }
};