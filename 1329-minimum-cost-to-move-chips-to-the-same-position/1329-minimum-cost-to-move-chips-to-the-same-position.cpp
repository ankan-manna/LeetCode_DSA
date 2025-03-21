class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int even=0,odd=0;
        set<int>s;
        int esum=0,osum=0;
        for(int i=0;i<pos.size();i++){
            if(pos[i]%2==0){
                esum++;
            }else{
                osum++;
            }
            s.insert(pos[i]);
        }

        for(auto x:s){
            if(x%2==0) even++;
            else odd++;
        }

        if(even>odd)
        return osum;
        else if(even==odd){
            return (esum>osum)?osum:esum;
        }
        else
        return esum;
    }
};