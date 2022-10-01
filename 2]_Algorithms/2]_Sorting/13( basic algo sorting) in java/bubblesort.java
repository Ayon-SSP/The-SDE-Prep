public class bubblesort {
    // --> IF ARRAY IS UNSORTED 
    // public static void Bubblesort( int arr[]){
    //     //outer loop upto n-1 turns
    //     for(int turn=0;turn<arr.length-1;turn++){
    //         for(int j=0;j<arr.length-1-turn;j++){
    //             // inner loop upto n-1-turn (turn =j that is already largest in 1st iteration)
    //             //if 2nd number is greater than 1st then swap
    //             if(arr[j]>arr[j+1]){// 5>1--> 1,5
    //                 //swap
    //                 int temp=arr[j]; //t=5
    //                 arr[j]=arr[j+1]; //j=1
    //                 arr[j+1]=temp; //j+1=5  --> 1,5
    //             }
                
    //         }
            
    //     }
    // }
    // public static void main(String args[]){
    //     int arr[]={5,1,4,3,2};
    //     Bubblesort(arr);
    //     System.out.print("sorted array is:");
    //     for(int i=0;i<arr.length;i++){
           
    //         System.out.print(  +arr[i] + " ");
    //     }

    // }

    // IF ARRAY IS SORTED ITSELF
    public static  void bubblesorts(int arr[]){
        int swap=0;
        for(int i=0;i<arr.length-1;i++){//upto n-1 turns
            for(int j=0;j<arr.length-1-i;j++){//upto n-i times
                if(arr[j]>arr[j+1]){
                    //swap
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swap++;
                    
                }  }}
                if(swap==0){// if it is in ascending order 
                    System.out.println(" entered array is in sorted format");
                    
                }
                else{    //print(array)
                    for(int k=0;k<arr.length;k++){
                        System.out.print(arr[k]+" ");
                        
                    }
                }
    }
    public static void main(String args[]){
        int arr[]={1,2,3,4,5};
        bubblesorts( arr);//function call
    
       


    }
    
}
