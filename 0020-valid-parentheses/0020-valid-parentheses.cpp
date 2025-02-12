class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto c:s){
            if(c=='('||c=='{'||c=='[')
            st.push(c);
            else{
                if(st.empty()) return false;
                char ch=st.top();
                st.pop();
                if((c==')'&&ch!='(')||(c=='}'&&ch!='{')||(c==']'&&ch!='['))
                return false;
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};