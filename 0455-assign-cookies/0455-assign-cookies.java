class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int i=0,j=0,c=0;
        while(i<g.length && j<s.length){
            if(s[j]>=g[i]){
               i++;//  next child => ch need 1cookie can be happy by geet 3
            }
            j++;// sobsomy next cookie 
        }
        return i;
    }
}