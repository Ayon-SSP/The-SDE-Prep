public class pairsinarray {
  public static void pairs(int arr[]){
    int totalcount=1;
    for(int i=0;i<arr.length;i++){
        int currentelement=arr[i];
        for( int j=i+1;j<arr.length;j++){
            System.out.print("("+ currentelement +","+arr[j]+")");
            totalcount++;

        }
        System.out.println();
    }
    System.out.println( " total count=" +totalcount);
    
  }
  public static void main(String args[]){
    int arr[]={2,4,6,8,9};
    pairs(arr);
   
  }
    
}
