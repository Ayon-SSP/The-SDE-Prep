 import java.util.*;
 // write a program to print the sum of digits
public class assq5sumofdigits {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("enter a digit");
        int digit= sc.nextInt();
    System.out.println("sum of "+digit +"="+sumofdigit(digit));

    }
    public static int sumofdigit(int digit)
    {
        int sumofdigit=0;
        while(digit>0){
            int lastdigit=digit%10;
            sumofdigit=sumofdigit+lastdigit;
            digit=digit/10;
        }
        return sumofdigit;
    }
    
}
