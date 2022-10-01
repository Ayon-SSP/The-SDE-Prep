public class solidrhombus {
    public static void solidrhomb(int n){
        for(int i=0;i<=n;i++){//outer loop
            for(int j=0;j<=n-i;j++){//inner loop spaces upto n-i
            System.out.print(" ");
            }
            for(int j=1;j<=n;j++){ // inner loop spaces upto n
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        solidrhomb(6);
    }
    
}
