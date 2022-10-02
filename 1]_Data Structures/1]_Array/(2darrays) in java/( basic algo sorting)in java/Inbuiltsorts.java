import java.util.Arrays;
public class Inbuiltsorts {
    // java contains inbuilt sorts named (util.Arrays)module first we need to import it by import java.util.Arrays
    public static void Printarray(int arr[]){ // function for printing the sorted array
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
        int arr[]={2,6,4,3,5,1};
        System.out.print("sorted array :");
        Arrays.sort(arr);// SORT function
        Printarray(arr);//function call 
        

    }
    
}
