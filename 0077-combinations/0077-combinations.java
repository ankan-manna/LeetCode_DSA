class Solution {
    public void solve(int st,int nd,int k,List<Integer>temp,List<List<Integer>>ans){
        if(temp.size()>=k){
            ans.add(new ArrayList<Integer>(temp));
            return;
        }
        for(int i=st;i<=nd;i++){
            temp.add(i);
            solve(i+1,nd,k,temp,ans);
            temp.remove(temp.size()-1);
        }
    }
    public List<List<Integer>> combine(int n, int k) {
        List<Integer> temp=new ArrayList<>();
        List<List<Integer>> ans=new ArrayList<>();
        solve(1,n,k,temp,ans);
        return ans;
    }
}