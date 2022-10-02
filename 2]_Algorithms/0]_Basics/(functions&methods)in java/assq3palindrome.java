
import java.util.*;
// write a program to print th number is palindrome or not
public class assq3palindrome {
public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    System.out.println("enter nmbr");
    int polindrome= sc.nextInt();
    
    if(ispolindrome(polindrome)) {
        System.out.println("Number : "+polindrome+" is a palindrome");    
    }else{
        System.out.println("Number : "+polindrome+" is not a palindrome");
    }
}

public static boolean  ispolindrome(int number){
     int reverse= 0;
     int polindrome = number;

     while(polindrome!=0){
        int lastdigit=polindrome%10;
        reverse = reverse *10 +lastdigit;
        polindrome=polindrome/10;
         }
        if( reverse==number){
            return true;
        }
     
     return false;
     
     }

     
     
}


   