public class maxsubarrayKADANESALGO {
    public static void KADANESALGO(int arr[]){
        int cursum=0;
        int maxval=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            cursum=cursum+arr[i];
            if(cursum<0){
                cursum=0;
            }
            maxval=Math.max(cursum,maxval);
            System.out.println(maxval);

        }
        System.out.println("maxval :"+maxval);
    }
    public static void main(String args[]){
        int arr[]={1,-2,6,3,-1};
        KADANESALGO(arr);
    } 
}
