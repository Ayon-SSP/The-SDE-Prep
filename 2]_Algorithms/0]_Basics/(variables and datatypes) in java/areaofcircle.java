// write a program to calculate the radius of circle
import java.util.*;
public class areaofcircle {
    public static void main(String args[])
    {
        Scanner obj= new Scanner(System.in) ;
        System.out.println("enter r");
        int r = obj.nextInt();
        float area =3.14f * r* r;
        System.out.println("area of circle=" + area);

    }
}
