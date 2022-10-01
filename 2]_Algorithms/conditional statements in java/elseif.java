import java.util.*;
public class elseif {
    public static void main(String args[])
    {

    Scanner sc=new Scanner(System.in);
    int n1=sc.nextInt();
    if(n1>=18)
      {
        System.out.println("you are eligible for vote");
      }
    else if(n1>=13 && n1<=17){
        System.out.println("you are a teenager");
    }

    else{
    System.out.println("not eligible for vote");
   }
}
}
