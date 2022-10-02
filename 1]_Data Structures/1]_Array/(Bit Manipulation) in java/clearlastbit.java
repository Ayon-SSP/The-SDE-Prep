public class clearlastbit {
    public static int clearlastbit(int n, int i){
        int bitmask = (~0)<<i;
        return n& bitmask;
    }
    public static void main(String args[]){
        System.out.println(clearlastbit(15,2));
    }
    
}
