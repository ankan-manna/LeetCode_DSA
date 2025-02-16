class Solution {
public:
    bool isPalindrome(string s,int st,int nd){
        while(st<=nd){
            if(s[st]!=s[nd])
            return false;
            st++;
            nd--;
        }
        return true;
    }
    void solve(int idx,string s,vector<string>&part,vector<vector<string>>&ans){
        if(idx==s.length()){
            ans.push_back(part);
            return;
        }
        for(int i=idx;i<s.length();i++){
            if(isPalindrome(s,idx,i)){
                part.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,part,ans);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>part;
        solve(0,s,part,ans);
        return ans;
    }
};