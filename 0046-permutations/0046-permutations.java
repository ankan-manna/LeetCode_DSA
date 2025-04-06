class Solution {
    public void solve(int[] nums,List<Integer>temp,Map<Integer,Integer>m,List<List<Integer>>ans){
        if(temp.size()==nums.length){
            ans.add(new ArrayList<Integer>(temp));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(m.get(i)==null || m.get(i)==0){
                temp.add(nums[i]);
                m.put(i,1);
                solve(nums,temp,m,ans);
                m.put(i,0);
                temp.remove(temp.size()-1);
            }
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer> temp=new ArrayList<>();
        Map<Integer,Integer> m=new HashMap<>();
        solve(nums,temp,m,ans);
        //Collections.sort(ans);
        return ans;
    }
}