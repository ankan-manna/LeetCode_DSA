class Solution {
    public void solve(int n,StringBuilder str,List<String> ans){
        if(n<0){
            ans.add(str.toString());
            return;
        }
        str.append('1');//add at the last
        solve(n-1,str,ans);
        str.deleteCharAt(str.length()-1);//remove it

       
        if(str.length()==0 || str.charAt(str.length()-1)!='0'){
             str.append('0');
             solve(n-1,str,ans);
             str.deleteCharAt(str.length()-1);
        }

    }
    public List<String> validStrings(int n) {
       StringBuilder str=new StringBuilder();
       List<String> ans=new ArrayList<>();
       solve(n-1,str,ans); 
       Collections.sort(ans);
       return ans;
    }
}