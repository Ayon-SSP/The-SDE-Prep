
 import java.util.*;
 // Enter the cost of three iterms and print the total amount including 18%gst
public class assquestion3 {
    public static void main(String args[])
    {
     Scanner sc= new Scanner(System.in);
     float pencil=sc.nextFloat();
     float pen=sc.nextFloat();
     float eraser =sc.nextFloat();
     float totamount= pencil+pen+eraser;
    //  float gst= totamount * 18/100;
     float includinggst= totamount+(0.18f * totamount);
     System.out.println("total amount =" + totamount);
    //  System.out.println("amount including gst = " + gst);
     System.out.println("total amount including gst =" + includinggst);
    
    }
    
}
