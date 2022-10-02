public class inversecount {
    public static int getinversecount(int arr[]){
        int n= arr.length;
        int inversioncount=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    inversioncount++;
                }
            }
        }
        return inversioncount;
    }
    public static void main(String args[]){
        int arr[]={2,4,1,3,5};
        System.out.println(getinversecount(arr));
    }
    
}
