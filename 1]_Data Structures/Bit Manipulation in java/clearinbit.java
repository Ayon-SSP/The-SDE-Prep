public class clearinbit {
    public static int clearbit(int n,int i){
        int bitmask=~(1<<i);
        return n&bitmask;


    }
    public static void main(String args[]){
        System.out.println(clearbit(10, 1));
    }
    
}
