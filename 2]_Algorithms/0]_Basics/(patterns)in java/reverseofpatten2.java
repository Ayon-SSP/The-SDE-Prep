public class reverseofpatten2 {
    // write a program to print reverse pattern with
    public static void main(String args[])
    {
        int n=5;
        for(int i=1;i<=n;i++){//outerloop 5 times
            for(int j=1;j<=n-i+1;j++){//inner loop
                System.out.print(j);

            }
            System.out.println();

        }
    }

    
}
