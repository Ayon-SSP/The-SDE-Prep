public class invertedhalfnumberspyramid {
    public static void ihnp(int n)  {
        for(int i=1;i<=n;i++){//outer loop till n
        for(int j=1;j<=n-i+1;j++){//innerloop 
        System.out.print(j);
        }
        System.out.println();
        }
    } 
    public static void main(String args[]){
        ihnp(5);
    }
}
