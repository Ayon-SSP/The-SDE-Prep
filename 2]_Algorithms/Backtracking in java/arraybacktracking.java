public class arraybacktracking{
    public static void changeArr(int arr[], int idx, int val){
        // base case
        if(idx==arr.length){
            printArr(arr);
            return;
        }
        //recursion
        arr[idx]=val;
        changeArr(arr,idx+1,val+1);// recursion function
        //backtracking a array with -2
        arr[idx]=arr[idx]-2;
    }
     public static void printArr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
        }
    }


    public static void main(String args[]){
        int arr[]=new int[5];
        int val;
       // fcall
       changeArr(arr, 0, 1);
       System.out.println();
       printArr(arr);

    }
}