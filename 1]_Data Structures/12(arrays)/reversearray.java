import javax.swing.plaf.synth.SynthLookAndFeel;

public class reversearray {
    public static void reversearr( int arr[]){
        int start=0,end=arr.length-1;
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end] =temp;
            start++;
            end--;
        }
     
    }
    public static void main(String args[]){
        int arr[]={2,3,4,5};
       
         
       reversearr(arr);
       for(int i=0;i<arr.length;i++){
       System.out.print(arr[i]);}
    }
    
}
