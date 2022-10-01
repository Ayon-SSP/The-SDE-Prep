public class invertedhalfpyramid {

    public static void ihp(int n){
        for(int i=1;i<=n;i++){//outerloop till n
              for(int j=1;j<=n-i;j++){//spaces upto n-i
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String args[])
    {
        ihp(7);
    }
    
}
