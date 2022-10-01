
import java.util.*;
public class maxsubarraysumBRUTEFORCE {
    public static void sasum(int arr[]){
         int currentsum=0;
         int max_value=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            int start=i;
            for(int j=i;j<arr.length;j++){
                int end=j;
                currentsum=0;
                for(int k=start;k<=end;k++){
                    
                    currentsum+=arr[k];

                }
                System.out.println(currentsum+" ");
                if(max_value<currentsum){
                    max_value =currentsum;
                }

            }
            System.out.println("max sum of array :"+max_value);

            System.out.println();
        }
    }
    public static void main(String args[]){
        int arr[]={1,-2,6,3,-1};
        sasum(arr);

    }
    
}
