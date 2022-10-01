import java.util.Arrays;
public class ascendingInbuiltsort {
    public static void printarray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }

    }
    public static void main(String args[]){
        int arr[]={3,5,7,2,1,8,4,9,6};
        // we can sort array inbetween also by passing startung index and ending index in Arrays.sort()
        Arrays.sort(arr,0,5);//sorting from 0th to 5th index
        printarray(arr);

    }
    
    
}
