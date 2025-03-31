class Solution {
   public double powerExp(double a,long e){
        if(e==0) return 1;
        if(e%2==0){
            return powerExp(a*a,e/2);
        }else{
            return a*powerExp(a*a,e/2);
            //2^7=>2*2^3*2^3
        }
    }
    public double myPow(double x, int n) {
        double ans=1.0;
        long num=(long)n;
        if(num<0){
            num=-1*num;
            ans=powerExp(x,num);
            return 1.0/ans;
        }else{
            ans=powerExp(x,num);
            return ans;
        }
        
    }
}