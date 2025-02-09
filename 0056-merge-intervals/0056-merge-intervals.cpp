class Solution {
    
   
public:
 static bool comp(vector<int>&v1,vector<int>&v2){ // due to inside a class it is a non-staic-member function
        return v1[0]<v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>>v;
        for(int i=0;i<intervals.size();i++){
            if(v.empty()){
                v.push_back(intervals[i]);
            }else {
                if(v.back()[1]<intervals[i][0])
                v.push_back(intervals[i]);
                else
                {
                    v.back()[1]=max(v.back()[1],intervals[i][1]);

                }
            }
        }

        return v;
    }
};