public class rangeofprime {
    //WAP to print prime numbers in given range
    public static boolean isprime(int n){
        boolean prime=true;
        //for(int i=2;i<=n-1;i++){// 1 = 2 to (n-1)
            for (int i=2;i<=Math.sqrt(n);i++){ // n= root n* root n 
            if(n%i==0){
                return false;
                 
            }
           
        }
        return true;
    }
public static void primeinrange(int n){
        for(int i=2;i<=n-1;i++){
        if(isprime(i)==true){
            System.out.print(i +" ");
        }
       
    }
        return;
    }
    public static void main(String args[])
    {
       primeinrange(1000);
    }
    
}
