class Solution {
    public String longestCommonPrefix(String[] strs) {
       StringBuilder s=new StringBuilder();
       int n=strs.length;
       Arrays.sort(strs);
       String first=strs[0] ;
       String last=strs[n-1];
       for(int i=0;i<Math.min(first.length(),last.length());i++){
        if(first.charAt(i)!=last.charAt(i))
          return s.toString();

           s.append(first.charAt(i));
       }
      return s.toString();
    }
}