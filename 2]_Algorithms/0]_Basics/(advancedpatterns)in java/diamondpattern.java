public class diamondpattern {
    public static void diamond(int n){
        //first half
        for(int i=1;i<=n;i++){ //outer loop
            for(int j=1;j<=n-i;j++){
                //innerloop for spaces
                System.out.print(" ");
            }
            for(int j=1;j<=(2*i)-1;j++){
                System.out.print("*");
            }
            System.out.println();
           

        }
        //second half(inverse or reverse)
        for(int i=n;i>=1;i--){ //outer loop
            for(int j=1;j<=n-i;j++){
                //innerloop for spaces
                System.out.print(" ");
            }
            for(int j=1;j<=(2*i)-1;j++){
                System.out.print("*");
            }
            System.out.println();
           

        }
    }
    public static void main(String args[])
    {
        //function call
        diamond(20);
    }
    
}
