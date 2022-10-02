public class minandmaxin2darray {
    public static int maxinarray(int arr[][]){
        int max_value=Integer.MIN_VALUE;//=value(-200)
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[0].length;j++){
                if( max_value < arr[i][j]){ //-200<1 
                    max_value=arr[i][j];// max=1                
                }
            }
        }
          return max_value;
    }
    public static void main(String args[]){
    int arr[][]={ {2,4,3},
                  {4,5,6}, 
                  {7,8,9} };

                 System.out.println(maxinarray(arr));    
}}
