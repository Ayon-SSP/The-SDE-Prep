import java.util.*;
//write a program to calculate incometax
public class imcometaxcalci {
    public static void main(String args[])
    {
    Scanner sc= new Scanner(System.in);
    int income =sc.nextInt();
    float tax=0;
   if(income<=500000)
    {
        tax=0;
     System.out.println("tax =" + tax);
    }
    else if(income>=500000 && income<=1000000)
    {
        tax = income *(0.2f);
        System.out.println("tax = "+ tax);
    }
    else if(income>10000)
    {
        tax = income *(0.3f);
     System.out.println("tax = "+ tax);
    }
    else{System.out.println("invalid income");}
    }
    
}
