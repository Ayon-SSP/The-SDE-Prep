public class assq2 {
    // selection sort descending order sorting
    public static void Selectionsort(int arr[]){
        for(int i=0;i<arr.length-1;i++){// index 0 to n-1
            int minpos=i;// 0==minpos
            for(int j=i+1;j<arr.length;j++){  // i+1 to n
                if(arr[minpos]<arr[j]){
                    minpos=j;
                }
            }
            //swap
            int temp=arr[minpos];
            arr[minpos]=arr[i];
            arr[i]=temp;
        }
    }
  
       public static void Printarray(int arr[]){
        System.out.print( "selection sort in Descending order is: ");
        for(int j=0;j<arr.length;j++){
            System.out.print( arr[j]+" ");}
       }
    public static void main(String args[]){
        int arr[]={1,2,1};
        Selectionsort(arr);// function call for sorting
        Printarray(arr);// function call for printing sorted array
       
       
    }
    
}
