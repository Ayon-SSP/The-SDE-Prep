public class quicksort {
    //print array function
    public static void printarr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
        }
    }
    // Quick sort
    public static void quickSort(int arr[],int si,int ei){
        //base case
        if(si>=ei){
            return;
        }
        // implementation
        int pIdx= partition(arr,si,ei);
        quickSort(arr,si,pIdx-1);//left part reccursion
        quickSort(arr, pIdx+1, ei);// right part reccursion
    }
    public static int partition(int arr[],int si,int ei){
        int pivot=arr[ei];
        int i=si-1;
        for(int j=si;j<ei;j++){
            if(arr[j]<=pivot){
            i++;
            //increment and swap
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
        i++;
        int temp=pivot;
        arr[ei]=arr[i];// pivot=arr[i] here pivot = variable  variable values does not reflect in functions (call by value)
        arr[i]=temp;
        return i;
    }

    public static void main(String args[]){
        int arr[]={2,1,3,4};
        quickSort(arr, 0, arr.length-1);
        printarr(arr);
    }


    
}
