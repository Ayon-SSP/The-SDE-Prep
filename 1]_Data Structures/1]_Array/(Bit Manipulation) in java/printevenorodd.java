public class printevenorodd {

    public static  void printoe(int n){
        int bitmask=1;
        if((n & bitmask) == 0){
            System.out.println("even");

        }
        else{
            System.out.println("odd");
        }
    }

    public static void main(String args[]){
        int n=5;
        printoe( n);

    }
    
}
