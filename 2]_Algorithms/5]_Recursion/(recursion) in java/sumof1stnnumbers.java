public class sumof1stnnumbers {
    public static int calcsum(int n){
        if(n==1){
            return 1;
        }
         int snm1=calcsum(n-1);
         int sumn=n+snm1;
         return sumn;
    }
    public static void main(String args[]){
        int n=5;
      System.out.println( calcsum(n));
    }
    
}
