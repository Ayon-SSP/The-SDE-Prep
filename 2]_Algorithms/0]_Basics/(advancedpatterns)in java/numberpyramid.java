public class numberpyramid {
    public static void np(int n){
        for(int i=1;i<=n;i++){//outer loop till n
          for(int j=1;j<=n-i;j++){
            //inner loop for spaces
            System.out.print(" ");
           }
           for( int j=1;j<=i; j++){// inner loop prints number with space
              System.out.print(i+" ");

           }
           System.out.println();

        }
      //extra 
        // for(int i=n;i>=1;i--){//outer loop till n
        //     for(int j=1;j<=n-i;j++){
        //       //inner loop for spaces
        //       System.out.print(" ");
        //      }
        //      for( int j=1;j<=i; j++){// inner loop prints number with space
        //         System.out.print(i+" ");
  
        //      }
        //      System.out.println();
  
        //   }
    }
    public static void main(String args[])
    {
       np(9);
    }
    
}
