public class swaping2numbrswithout3rdvariable {
    public static void main (String args[]) {
        int x=4;
        int y=5;
        System.out.println("beforeswapping "+ x+" "+ y);
        x=x^y;// x xor=ans1
        y=x^y;// y xor =ans2

        x=x^y;//ans1 xor ans2
        System.out.println("afterswapping "+ x+" "+ y);

        
    }
    
    
}
