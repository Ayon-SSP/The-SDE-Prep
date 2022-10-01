public class assq1 {
    //print the number of digits repeated
    public static void countof3(int matrix[][], int key){
        int count=0;
            for(int i=0;i<matrix.length;i++){
           
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==key){
                    count++; 
                     
                }
            }
    }
    System.out.println(count);
    
}

public static void main(String args[]){
        int matrix[][]={{1,3,3},
                        {4,5,3}};
        int key=3;
       
        countof3(matrix, key);
       
    }
    
    }
