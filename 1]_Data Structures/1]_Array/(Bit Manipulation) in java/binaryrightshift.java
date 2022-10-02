public class binaryrightshift {
    public static void main(String args[]){
        System.out.println(5>>2);
        // a>>b can also be written as a/2^b
        int a=5;
        int b=2;
        int pow=b;
        int c= a/(int)Math.pow(2,pow);
        System.out.println(c);
    }
    
}
