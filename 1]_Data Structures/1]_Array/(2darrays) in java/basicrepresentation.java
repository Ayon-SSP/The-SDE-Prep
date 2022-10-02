import java.util.*;
public class basicrepresentation {
    public static void main(String args[]){
        int matrix[][]=new int [3][3];//2d array creation
        Scanner sc = new Scanner(System.in);
        int n=3;
        int m=3;
        for(int i=0;i<n;i++){// rows
            for(int j=0;j<m;j++)  {//columns
                matrix[i][j]=sc.nextInt();// input stored in matrix

            }  
               
        }
        // printing output
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(matrix[i][j]+ " ");
            }
            System.out.println();// new line in printing output
        }



    }
    
}
