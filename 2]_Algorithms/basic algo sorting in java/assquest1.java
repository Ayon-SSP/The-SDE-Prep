public class assquest1 {
    // bubblesort descending order sorting
    public static void bubblesort(int arr[]){
        for(int i=0;i<arr.length-1;i++) {
           for(int j=0;j<arr.length-1-i;j++){
             if(arr[j]<arr[j+1]){
                // if 1st nmbr < 2nd nmbr swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
           }
        }
       }
       public static void Printarray(int arr[]){
        System.out.print( " Sorted array in Desending  order is: ");
        for(int j=0;j<arr.length;j++){
            System.out.print( arr[j]+" ");}
       }
    public static void main(String args[]){
        int arr[]={3,6,2,1,8,7,4,5,3,1};
        bubblesort(arr);// function call for sorting
        Printarray(arr);// function call for printing sorted array
       
       
    }
    
    
}
