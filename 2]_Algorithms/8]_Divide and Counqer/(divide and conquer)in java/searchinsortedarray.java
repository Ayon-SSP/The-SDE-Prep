import java.util.SortedMap;

public class searchinsortedarray {
    public static int search(int arr[], int tar, int si, int ei){
        // base case
        if(si>ei){
            return -1;
        }
        int mid=(si+ei)/2;
        // is found
        if(arr[mid]==tar){
            return mid;
          }
          //  mid on line 1
        if(arr[si]<=arr[mid]){
            if(arr[si]<= tar&& tar<=arr[mid]){
          // case a left
            return  search(arr, tar, si, mid-1);
            }
              else{// case b right
           return search(arr, tar, mid+1, ei);
            }}
       else {// mid on line 2
       
        if(arr[mid]<= tar&& tar<=arr[ei]){
            // case c right
            return search(arr, tar, mid+1, ei);
        }
        else{// case d left
            return search(arr, tar, si, mid-1);
        }
        
        }
    }
    public static void main(String args[]){
        int arr[]={4,5,6,7,0,1,2,3};
        int target=0;
        int pidx=search(arr, target, 0, arr.length-1);
        System.out.println(pidx);

    }
}

