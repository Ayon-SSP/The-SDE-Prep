import java.util.*;
//write a program to print prime number or not
public class prime {
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
    public static void main(String args[])
    {
       System.out.println( isprime(23));
    }
    
}
