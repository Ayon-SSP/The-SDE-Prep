public class maxsubarrayprefixmethod {
    public static void prefixsum(int arr[]){
        int currsum=0;
        int maxv=Integer.MIN_VALUE;
        int prefix[]=new int [arr.length];
        prefix[0]=arr[0];
        for(int i=1;i<arr.length;i++){
            prefix[i]=prefix[i-1]+arr[i];// all arr[i] is atored in prefix[i]
        }
        for(int i=0;i<arr.length;i++){
            int start=i;//start index
            for(int j=i;j<arr.length;j++){
                int end=j;//end index
                currsum=start==0?prefix[end]:prefix[end]-prefix[start-1];// ternary operater : if start =0;return that value only else return end-start-1
                if(maxv<currsum){//if smakllest 
                    maxv=currsum;//assign largest to it
                }
               

            }
            System.out.println(" max sum ="+ maxv+"  ");
        }
    }
    public static void main(String args[]){
        int arr[]={1,-2,6,3,-1};
        prefixsum(arr);


    }
    
}
