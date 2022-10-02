public class assq3 {
    //Write a program to FindTransposeofa Matrix

    public static void Printarray(int matrix[][]){
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
               
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
           }
        
    }

    public static void main(String args[]){
        int rows=2,cols=3;
        //original array
        int matrix[][]= {{1,2,3},{4,5,6}};
        //transpose array
        int Transpose[][]= new int[cols][rows];
       for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            Transpose[j][i]=matrix[i][j];
        }
       }
       Printarray(matrix);
       Printarray(Transpose);
    }


}