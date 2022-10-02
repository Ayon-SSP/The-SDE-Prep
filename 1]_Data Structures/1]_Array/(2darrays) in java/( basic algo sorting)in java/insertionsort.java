public class insertionsort {
    public static void  insertionsort(int arr[]){
        for(int i=1;i<arr.length;i++){
            int curr=i;
            int prev=i-1;
            while(prev>=0 && arr[prev]<curr){
                arr[prev+1]=arr[prev];
                prev--;

            }
            arr[prev+1]=arr[curr];

        }
       

    }
    public static void Printarray(int arr[]){
        System.out.print( "selection sort in Descending order is: ");
        for(int j=0;j<arr.length;j++){
            System.out.print( arr[j]+" ");}
       }
    public static void main(String args[]){
        int arr[]={2,4,5,6,7};
        insertionsort(arr);
        Printarray(arr);
        
    }
    
}
