import java.util.Arrays;
import java.util.Collection;// for descending order we need to import java.util.collections(library)
import java.util.Collections;
public class descendingInbuiltsort {
    public static void printarray(Integer arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }

    }
    public static void main(String args[]){
        Integer arr[]={3,5,2,4,1,8,9,6};// for collections library we use Integer(instead of int)
        Arrays.sort(arr,0,3,Collections.reverseOrder());
        printarray(arr);

    }
    

}
