public class selectionsort {
    public static void selection(int arr[]){
        for(int i=0;i<arr.length-1;i++){// array.length= 5 --> 0 to 4
            int smallestnumber=i;
            for(int j=i+1;j<arr.length;j++){ // 1 to 5
                if(arr[smallestnumber]>arr[j]){ // arr[smallestnumber]<arr[j]= desending order
                    smallestnumber=j; // we got smallest number and have to place in 1st indrx that is i
                }}
                //outer loop swap 
                int temp=arr[smallestnumber];
                arr[smallestnumber]=arr[i];
                arr[i]=temp; // swapped i & smallestnumber


            
        }
    }
    public static void main(String args[]){
        int arr[]= {5,2,3,1,4};
        selection(arr);// fcall 
        // print array
        for(int i=0;i<arr.length;i++){
            System.out.print( arr[i] +" ");
        }

    }
    
}
