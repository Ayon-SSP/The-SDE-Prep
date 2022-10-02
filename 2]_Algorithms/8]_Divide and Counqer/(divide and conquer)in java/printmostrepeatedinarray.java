public class printmostrepeatedinarray {
    public static int countinrange(int arr[], int num,int si,int ei){
        int count=0;
        for(int i=si;i<=ei;i++){
            if(arr[i]==num){
                count++;
            }
        }
        return count;
    }
    public static int majorelmtrecc(int arr[],  int si, int ei){
        // base case
        if(si==ei){
            return arr[si];
        }
        // mid 
        int mid=(si+ei)/2;
        //recursion left and right
        int left =majorelmtrecc(arr,  si, mid);
        int right= majorelmtrecc(arr, mid+1, ei);
        // if two halfs are same
        if(left==right){
            return left;
        }
        //otherwise
        int leftcount=countinrange(arr,left,si,ei);
        int righttcount=countinrange(arr,right,si,ei);

        return leftcount>righttcount?left:right;//ternary 
    }

        public static int majorelmt(int arr[]){
            return majorelmtrecc(arr, 0, arr.length-1);

        }
    public static void main(String args[]){
        int arr[]={2,2,1,2,3,2};
        System.out.println(majorelmt(arr));
    }
    
}
