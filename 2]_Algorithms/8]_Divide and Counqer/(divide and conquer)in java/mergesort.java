public class mergesort {

    //merge sort aproach
    public static void mergeSort(int arr[], int si, int ei){
        //base case
        if(si>=ei){
            return;
        }
        //implementation
    //find mid
    //do reccursion on left and right sides
        int mid=si+(ei-si)/2;
        mergeSort(arr, si, mid);
        mergeSort(arr, mid+1, ei);
        // merging or combining sorted array
        merge(arr,si,mid,ei);
    }
    
    public static void merge(int arr[],int si,int mid,int ei){
        // create temperary array
    int temp[]= new int[ei-si+1];// size = L(0->3)=4, R(4->6)=3 l+r=7 & ei-si+1=7
      int i= si;
      int j=mid+1;
      int k=0;
      while(i<=mid && j<=ei){
     if (arr[i]<arr[j]){// if left values are less than right side
        temp[k]=arr[i];// copy elemnets
        i++;
      }  else{
        temp[k]=arr[j];
        j++;
      }
      k++;
    }
    //left part
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    //right part
    while(j<=ei){
        temp[k++]=arr[j++];
    }
// copy temp[] to original array[]
    for( k=0,i=si;k<temp.length;k++,i++){
        arr[i]=temp[k];

    }
    
   }
// for printing array
   public static void printarr(int arr[]){
    for(int i=0;i<arr.length;i++){
        System.out.print(arr[i]+" ");
    }}
   
   public static void main(String args[]){
    int arr[]= {1,6,4,3,5,-1};//array
    mergeSort(arr, 0,arr.length-1);//fcall
    printarr(arr);// fcall
   }

}
