import java.util.*;
public class calculater {
    public static void main(String args[])
    {
        Scanner obj=new Scanner(System.in);
        System.out.println("enter a");
        int a=obj.nextInt();
        System.out.println(("enter b"));
        int b=obj.nextInt();
        System.out.println("enter oper");
        char oper= obj.next().charAt(0);
        switch(oper){
            case '+':System.out.println( "sum = " + a+b);
            break;
            case '-':System.out.println( "substract = " + (a-b));
            break;
            case '*':System.out.println( "product = " + (a*b));
            break;
            case '/':System.out.println( "devide = " + (a/b));
            break;
            case '%':System.out.println( "product = " + (a%b));
            break;
            default:System.out.println("invalid operater");
            
        }


    }
}
    
