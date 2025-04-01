class Solution {
public:
void solve(int ob,int cb,string str,vector<string>&ans){
    if(ob<=0 && cb<=0){
        ans.push_back(str);
        return;
    }
    if(ob>0) solve(ob-1,cb,str+"(",ans);
    if(cb>ob) solve(ob,cb-1,str+")",ans);
}
    vector<string> generateParenthesis(int n) {
        string str="";
        vector<string>ans;
        int ob=n,cb=n;
        solve(ob,cb,str,ans);
        return ans;
    }
};