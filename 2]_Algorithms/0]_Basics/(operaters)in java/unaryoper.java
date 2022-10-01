import javax.sound.midi.Synthesizer;

public class unaryoper {
    public static void main(String args[])
    {  
        //post increment
        int a=10;
        int b=a++;
        System.out.println(a);
        System.out.println(b);

        // pre increment
        int A=10;
        int B=++A;
        System.out.println(A);
        System.out.println(B);

        //post decrement
        int c=10;
        int d=c--;
        System.out.println(c);
        System.out.println(d);

        //pre decrement
        int C =10;
        int D=--C;
        System.out.println(C);
        System.out.println(D);
    }
    
}
