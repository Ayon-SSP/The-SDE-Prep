public class subarrays {
    public static void Subarrays(int arr[]){
        int subarraycount=0;
        for(int i=0;i<arr.length;i++){
             int start= i;
            for( int j=i+1;j<arr.length;j++){
              int end=j;
              for(int k=start;k<=end;k++){
                System.out.print(arr[k]+" ");
                subarraycount++;
              }
              System.out.println();

             }
             System.out.println();
             
          
        }
        System.out.println(subarraycount);
    }
    public static void main(String args[]){
    int arr[]= {2,4,6,8,9};
    Subarrays(arr);
    }
    
}
