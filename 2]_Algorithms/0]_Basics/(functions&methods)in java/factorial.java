import java.util.*;
// write a program to print factorial 
public class factorial {
    public static int printFactorial(int n){
          int fact=1;
          for(int i=1;i<=n;i++){
            fact=fact*i;
          }
          return fact;
    }
    public static void main(String args[])
    {
     Scanner sc= new Scanner(System.in);
     System.out.println(" enter n");
     int n= sc.nextInt();
     System.out.println("factorial of "+ n +" = " + printFactorial(n));
    }
    
}
