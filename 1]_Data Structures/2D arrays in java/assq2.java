public class assq2 {
    //Print out the sum of the numbers in the second row of the “nums” array

    public static void secondrowsum(int matrix[][]){
        int sum=0;
        for(int i=0;i<matrix.length;i++){
            if(i==1){
                for(int j=0;j<matrix[0].length;j++){
                    sum+=matrix[i][j];
                }
                System.out.print("sum of 2nd row:"+sum);
            }
        }
        

    }

    public static void main(String args[]){
        int matrix[][]= {{1,4,9},
                         {11,4,3},
                          {2,2,3} };
           secondrowsum(matrix);
    }
    
}
