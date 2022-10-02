import java.util.*;
// write a program to print average of three numbers
public class assquestion1 {
    public static void main(String args[])
    {
        Scanner obj=new Scanner(System.in);
        System.out.println("enter A");
        int A= obj.nextInt();
        System.out.println("enter B");
        int B=obj.nextInt();
        System.out.println("enter C");
        int C=obj.nextInt();
        int average=(A+B+C)/3;
        System.out.println("avarage =" + average);

    }

    
}
