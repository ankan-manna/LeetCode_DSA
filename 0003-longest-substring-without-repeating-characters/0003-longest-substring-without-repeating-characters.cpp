class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l=0,r=0,len=0;
        //int map[256]={-1};
         int map[256];
        memset(map, -1, sizeof(map));
        while(r<s.length()){
            if(map[s[r]]!=-1){
                if(map[s[r]]>=l)
                l=map[s[r]]+1;
            }
            len=max(len,(r-l+1));
            map[s[r]]=r;
            r=r+1;
        }
        return len;
    }
};