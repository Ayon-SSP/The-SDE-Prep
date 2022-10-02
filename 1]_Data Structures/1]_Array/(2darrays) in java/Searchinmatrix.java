public class Searchinmatrix {
    //STAIRCASE SEARCH (BOTTOMLEFTAPPROACH)

    public static boolean SEARCH(int matrix[][],int key){
        int rows=matrix.length-1;;
        int cols=0;
        while(rows<=matrix.length-1 && cols>=0){
            if(matrix[rows][cols]==key){
                System.out.println("found at "+rows+","+cols);
                return true; }
                else if(key>matrix[rows][cols]){
                    cols++;
                }
                else{
                    rows--;
                }       
             }
             return false;
    }
    public static void main(String args[]){
        int matrix[][]={{1,2,3},
                         {4,5,6},
                         {7,8,9}};
        int key=5;
       System.out.println( SEARCH(matrix,key));
    }
    
}
