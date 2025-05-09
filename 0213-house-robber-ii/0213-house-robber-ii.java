class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        if(n==1) return nums[0];
       ArrayList<Integer> arr1=new ArrayList<>();
       ArrayList<Integer> arr2=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(i!=0) arr1.add(nums[i]);
            if(i!=n-1) arr2.add(nums[i]);
        }
        int []dp1=new int[n-1];
        int []dp2=new int[n-1];
        Arrays.fill(dp1,-1);
        Arrays.fill(dp2,-1);
        int ans1=solve(0,arr1,dp1);
        int ans2=solve(0,arr2,dp2);
        return Math.max(ans1,ans2);
    }

    public int solve(int idx,ArrayList<Integer>arr,int[] dp){
        if(idx>=arr.size()){
            return 0;
        }
        if(dp[idx]!=-1) return dp[idx];

        int take=0,nTake=0;
        take=arr.get(idx)+solve(idx+2,arr,dp);
        nTake=solve(idx+1,arr,dp);

        return dp[idx]=Math.max(take,nTake);
    }
}