public class palindrome {
    public static void palindrom(int n){
        for(int i=1;i<=n;i++){//outer loop
            for(int j=1;j<=n-i;j++){ // inner loop
                // spaces print karo
            System.out.print(" ");
            }
            // desending order
            for(int j=i;j>=1;j--){
                System.out.print(j);
            }
            //ascending order
            for(int j=2;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();

        }

    }
    public static void main(String args[]){
        palindrom(9);
    }
    
}
