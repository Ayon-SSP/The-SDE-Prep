import  java.util.*;
//WAP to print sum of two numbers
public class sumofab {
    public static int printsum(int n1,int n2){
         int sum=n1+n2;
         return sum;
    }
    public static void main(String args[])
{
    Scanner sc= new Scanner(System.in);
    System.out.println("enter a:");
    int a= sc.nextInt();
    System.out.println("enter b:");
    int b= sc.nextInt();
    System.out.println("sum = "+ printsum(a,b));
     
}
    
}
