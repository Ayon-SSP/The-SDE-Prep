public class firstoccurence {
    public static int FOcc(int arr[],int key,int i){

        // base case
        if(i==arr.length){
            return -1;
        }
        if(arr[i]==key){
            return i;
        }
        return FOcc(arr,key ,i+1);
    }
    public static void main(String args[]){
        int arr[]={4,3,2,1,5,6,7,8};
       System.out.println( FOcc(arr,5,0));
    }
    
}
