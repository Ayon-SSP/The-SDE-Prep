
import java.util.*;
public class ternaryoper {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter nbr");
        int nbr=sc.nextInt();
        System.out.println("enter marks");
        int marks=sc.nextInt();
        System.out.println((nbr>=0)?"yes":"no");
        System.out.println((nbr%2==0)?"even":"odd");
        System.out.println((marks>=35)?"pass":"fail");
    }
    
}
