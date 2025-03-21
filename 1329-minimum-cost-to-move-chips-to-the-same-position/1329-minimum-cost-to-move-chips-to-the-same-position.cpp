class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int a = 0;
        int b = 0;
        for(int i=0;i<pos.size();i++){
            if(pos[i]%2==0){
                a++;
            }
            else{
                b++;
            }
        }
        return min(a,b);
    }
};