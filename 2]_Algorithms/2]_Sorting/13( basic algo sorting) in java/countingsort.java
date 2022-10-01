public class countingsort {
    public static void countingsorts(int arr[]){
        int largest=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            largest=Math.max(largest,arr[i]);

        }
        int count[]=new int[largest+1];
        for(int i=0;i<arr.length;i++){
            count[arr[i]]++;
        }
        //sorting
        int j=0;
        for(int i=0;i<count.length;i++){
        while( count[i]>0){
            arr[j]=i;
            j++;
            count[i]--;
            
        }
        }
    }
    public static void printarray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }

    }
    
    public static void main(String args[]){
        int arr[]={2,3,4,2,3,4,5,6};
        
        countingsorts(arr);
        printarray(arr);
       
        
       
    }
    
    
}
