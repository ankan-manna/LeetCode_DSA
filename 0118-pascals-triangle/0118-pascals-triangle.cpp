class Solution {
private:
    vector<int>entireRow(int n){
        vector<int> ans;
        int sum=1;
        ans.push_back(1);
        for(int i=1;i<n;i++){
            sum=sum*(n-i);
            sum=sum/i;
            ans.push_back(sum);
        }
        return ans;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=1;i<=numRows;i++){
            temp=entireRow(i);
            ans.push_back(temp);
        }
        return ans;
    }

};