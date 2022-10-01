
import java.util.*;
public class largestinarray {

    public static int largestinarray(int numarr[]){
        int largest=Integer.MIN_VALUE;
        for(int i=0;i<numarr.length;i++){
            if(largest <numarr[i]){
                largest=numarr[i];
                
            }
        }
        return largest;
    }
    public static void main(String args[]){
        int numarr[]={1,34,5,76,9,0};
        System.out.println(" largest value in array : "+largestinarray(numarr));

    }
    
}
