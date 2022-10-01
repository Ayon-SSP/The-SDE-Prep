public class hollowrhombus {
    public static void hollowrbs(int n){
        for(int i=1;i<=n;i++){
            //outer lopo
            for(int j=1;j<=n-i;j++){//spaces
            System.out.print(" ");
            }
            // print boundaries i and j== 1 or n
            for(int j=1;j<=n;j++){
                if(i==1||i==n||j==1||j==n){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        // function call
        hollowrbs(6);
    }
    
}
