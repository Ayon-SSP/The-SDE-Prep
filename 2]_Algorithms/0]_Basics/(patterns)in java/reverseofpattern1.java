public class reverseofpattern1 {
    public static void main(String args[])
    {
        int n=5;
        for(int i=1; i<=n;i++){ //outer loop goes upto n
            // for(int j=0;j<=n-i+1;j++){ //inner loop prints reverse   j=n-i+1  5-1+1,5-2+1,5-3+1 ...   applies to all
            //    System.out.print("*");
            // }
          for(int j=n; j>=i;j--){// not applicable to numbers  reverse of star is star but reverse of number is different
            System.out.print("*");
          }

            System.out.println();

        }
    }
    
}
