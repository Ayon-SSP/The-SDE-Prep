import java.util.*;
//write a program to convert Binary to Decimal
public class binarytodecimal {
    public static void btod(int n){
        int nbr=n;
         int decimal=0;
         int pow=0;
         while(n>0)
         {
            int lastdigit= n%10;
            decimal=  decimal+ lastdigit * (int)Math.pow(2,pow); // important formola to byhut
            pow++;
            n=n/10;
         }
         System.out.println(" binary to decimal of " + nbr + " is"+ decimal );
    }
    
    public static void main(String args[])
    {
        btod(11);
    }
}
