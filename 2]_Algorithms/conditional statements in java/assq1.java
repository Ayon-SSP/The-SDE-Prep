import java.util.*;
// write a program to get a nbr from user and print weather it is positive or negative
public class assq1 {


    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter an integer");
        int nbr = sc.nextInt();
        if(nbr>0){
            System.out.println(nbr + " is positive number");
        }
        else if(nbr<0){
         System.out.println(nbr + " is negative number");
        }
        else{System.out.println("zero ");}


    }
    
}
