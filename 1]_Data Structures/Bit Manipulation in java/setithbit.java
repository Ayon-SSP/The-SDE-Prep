public class setithbit {
    public static int getith(int n,int i){
        int bitmask=1<<i;
        return n | bitmask;
    }
    public static void main(String args[]){
        System.out.println(getith(10, 2));

    }
    
}
