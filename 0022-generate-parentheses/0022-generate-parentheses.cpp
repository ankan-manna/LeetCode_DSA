class Solution {
private:
    void solve(vector<string>&ans,string str,int fc,int rc){
        if(fc==0 && rc==0){
            ans.push_back(str);
            return;
        }
        if(fc>=0){
            solve(ans,str+"(",fc-1,rc);
        }
        if(rc>fc){
            solve(ans,str+")",fc,rc-1);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string str="";
        solve(ans,str,n,n);
        return ans;
    }
};