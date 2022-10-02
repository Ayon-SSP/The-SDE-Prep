public class assq1 {
    // print true if an array contains repeated numbers else print false
    public static boolean repeatednums(int arr[]){
        boolean repeated=false;
        for(int i=0;i<arr.length;i++){
           
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]==arr[j]){ // if first index = next index then same elements
                    repeated=true;
                }
            }
        }
        return repeated;
    }
    public static void main(String args[]){
        int arr[]={1,1,1,2,3,3,2,4,4};
        System.out.println(repeatednums(arr));

    }    
}
