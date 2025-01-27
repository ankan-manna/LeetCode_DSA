class Solution {
public:
   int distribute(vector<int>&cookies,vector<int>&child,int c,int len){
    if(c==cookies.size()){
        int unfair=INT_MIN;
        for(auto x:child){
            if(x>unfair)
            unfair=x;
        }
        return unfair;
    }
        int minunfair=INT_MAX;
        for(int i=0;i<len;i++){
            child[i]+=cookies[c];
            minunfair=min(minunfair,distribute(cookies,child,c+1,len));
            child[i]-=cookies[c];
        }
        return minunfair;
   }
    int distributeCookies(vector<int>& cookies, int k) {
       vector<int>child(k,0);
      return distribute(cookies,child,0,k); 
    }
};