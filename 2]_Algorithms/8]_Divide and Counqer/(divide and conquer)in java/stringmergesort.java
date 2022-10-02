public class stringmergesort {
    // merge sort aproach
    public static String[] strmerge(String arr[],int lo,int hi){
        // base case
        if(lo==hi){
            String []A={arr[lo]};
            return A;
        }
        // find mid
        int mid = (lo+hi)/2;
        // divide 
        String[] arr1=strmerge(arr, lo, mid);//left divided part 
        String[] arr2=strmerge(arr, mid+1, hi); // right divided part
        // create anather string to combine both arrays
        String [] arr3=merge(arr1,arr2);
        return arr3;


    }
    public static String[] merge(String arr1[], String arr2[]){
        int m=arr1.length;
        int n= arr2.length;
        int idx=0;
        String arr3[]=new String[m+n];
        int i=0;
        int j=0;
        while(i<m && j<n){
        if(isalphabeticall(arr1[i],arr2[j])){
            arr3[idx]=arr1[i];
            i++;
            idx++;
            
        }
        else{
            arr3[idx]=arr2[j];
            j++;
            idx++;
            
        }
       }
       while(i<m){
        arr3[idx]=arr1[i];
        i++;
        idx++;
        
         }
        while (j<n){
            arr3[idx]=arr2[j];
            j++;
            idx++;
            
        }
        return arr3;


    }
    static boolean isalphabeticall(String str1,String str2){
        if(str1.compareTo(str2)<0){
            return true;
        }
        
            return false;
        
    }
    

    public static void main(String args[]){
        String  arr[]={"ban","can","aan","tan"};
        String []a=strmerge(arr, 0, arr.length-1);
        for(int i=0;i<a.length;i++){
            System.out.print(a[i]+" ");
        }

    }
}
