class Solution {
    public void solve(int[] arr, int i, int k, List<Integer> temp, List<List<Integer>> ans) {
        if(k==0){
            ans.add(new ArrayList<Integer>(temp));
            return;
        }
        if(i>=arr.length ){
            if(k==0){
            ans.add(new ArrayList<Integer>(temp));
            }
            return;
        }
        if(k>=arr[i]){
            temp.add(arr[i]);
            solve(arr,i,k-arr[i],temp,ans);//take repeted
            temp.remove(temp.size()-1);//if we do i+1 ->take but not repetedly
        }
         solve(arr,i+1,k,temp,ans);

    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer> temp = new ArrayList<>();
        List<List<Integer>> ans = new ArrayList<>();
        solve(candidates, 0,target, temp, ans);
        return ans;
    }
}