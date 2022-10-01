import java.util.*; //  module is must and should for  taking input from user and creating object(scanner sc=new scanner(s.in))
public class inputinjava {
    public static void main(String args[])
    {
    // Scanner object=new Scanner(System.in);
    // System.out.println("enter a number");
    // int a= object.nextInt();
    // System.out.println("enter second number");
    // int b= object.nextInt();
    // int sum=a+b;
    // System.out.println("sum of " + a + " and " + b + " is =" + sum );

    

    Scanner sc= new Scanner(System.in);
    int a= sc.nextInt();
    int b= sc.nextInt();
    int product = a*b;
    System.out.println("product = " + product);
    }

    
}
