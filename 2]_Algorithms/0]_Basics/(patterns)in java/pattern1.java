public class pattern1 {
    //write a program to print pattern
    public static void main(String args[])
    {
        int n=5;
        for(int i=1;i<=n;i++){//outer loop goes up to n(4)
            for(int j=1;j<=i;j++){//innerloop goes up to i
                System.out.print("*");
            }
            System.out.println();

        }

    }
    
}
