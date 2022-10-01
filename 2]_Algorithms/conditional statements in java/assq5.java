import java.util.*;
//write a program to print weather the entered year is leap year or not
public class assq5 {
    public static void main(String args[])
    {
     Scanner sc= new Scanner(System.in);
     System.out.println("enter year");
     int year=sc.nextInt();
     if((year%4==0))
     {
        if(year%100==0)
        {
            if((year%400==0))
            System.out.println("leap year");
            else{
                System.out.println("not a leap year");
            }
        }
        else{
            System.out.println("is a leap year");

        }
       
     }
     else{System.out.println(year  +" is  not a leap year ");}

    }
}
