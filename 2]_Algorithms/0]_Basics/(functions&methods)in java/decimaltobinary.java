import java.util.*;
//write a program to convert Decimal to Binary 
public class decimaltobinary {
    public static void dtb(int n){
        int nbr=n;
        int  decimal=0;
        int pow=0;
        
        while(n>0){
             int rem=n%10;
            decimal=decimal+rem* (int)Math.pow(2 , pow);
                 pow++;
                 n=n/10;

        }
        System.out.println("decimal to binary of" + nbr + "=" + decimal);
    }
    public static void main(String args[])
    {
        dtb(11);
    }
}
    
