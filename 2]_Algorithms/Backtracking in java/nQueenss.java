public class nQueenss {

    static boolean isSafe(char board[][], int row, int col){
        // vertical
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        // diagonal left
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        // diag right
        for(int i=row-1,j=col+1;i>=0&&j<board.length;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
    return true;

    }
    
    public static boolean nQueens(char board[][], int row){
        //base case
        if(row== board.length){
            //Printboard(board);
            count++;
            return true; 
        } 
        // columns tracking 
        for(int j=0;j<board.length;j++){
            if(isSafe(board, row, j)){
                board[row][j]='Q';// replacing q with .
                if(nQueens(board, row+1)){// recursion fcall
                    return true;
                }
                board[row][j]='X';// back tracking step
                
            }
        }
        return false;
        
    }
    static int count=0;
    public static void Printboard(char board[][]){
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board.length;j++){
                System.out.print(board[i][j]+" ");
            }
            System.out.println();
            
        }
        System.out.println("-----------");
    }

public static void main(String args[]){
    int n=2;
   
    char board[][]= new char [n][n];
     // initaialize that all rowa and cols are empty so putn (.)
    
     for(int i=0;i<board.length;i++){
        for(int j=0;j<board.length;j++){
            board[i][j]='X';  
        }
     }
     // nqueens function call
    if( nQueens(board,0)){// fcall
        System.out.println("possible");
      Printboard(board);}
    else{
        System.out.println(" not possible ");
    }

    //  System.out.println("total no of ways : "+ count);
}
    
}
