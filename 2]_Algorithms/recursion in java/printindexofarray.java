public class printindexofarray {
    public static void  printindex(int arr[],int key ,int index){
        //base case
        if(index==arr.length){
            return ;
        }
        //work
        if(arr[index]==key){
           System.out.println(index+" ");

        }
       
            printindex(arr, key, index+1);
        
        
    }
    public static void main(String args[]){
        int arr[]= {3,2,4,5,6,2,7,2};
        printindex(arr, 2, 0);
    }
    
}
