class Solution {
    public List<String> letterCombinations(String digits) {
        String []arr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        List<String> ans=new ArrayList<String>();
         if(digits.length()==0) return ans;
       solve(0,digits,new StringBuilder(),arr,ans);
       return ans;
    }
    public void solve(int idx,String digits,StringBuilder sb,String[] arr,List<String>ans){
        if(sb.length()==digits.length()){
            String s=sb.toString();
            ans.add(s);
            return;
        }
        int letter=(int)(digits.charAt(idx)-'0');
        String str=arr[letter];
        for(int i=0;i<str.length();i++){
            sb.append(str.charAt(i));
            solve(idx+1,digits,sb,arr,ans);
            sb.delete(sb.length()-1,sb.length());//other-wise use deleteCharAt()
        }
    }
}