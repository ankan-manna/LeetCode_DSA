class Solution {
    public boolean findWord(int i,int j,int index,char[][] board,String word){
        //GOAL
        if(index == word.length())
            return true;
        //INVALID CONDITION
        if(i<0 || j<0 || i>=board.length || j>=board[0].length || board[i][j] != word.charAt(index)
         || board[i][j] == '$'){
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '$';
        boolean ans =  findWord(i+1,j,index+1,board,word) ||
        findWord(i-1,j,index+1,board,word) ||
        findWord(i,j+1,index+1,board,word) ||
        findWord(i,j-1,index+1,board,word);
        board[i][j] = temp;
        return ans;
    }
    public boolean exist(char[][] board, String word) {
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                if(board[i][j] == word.charAt(0)){
                    if(findWord(i,j,0,board,word))
                        return true;
                }
            }
        }
        return false;
    }
}