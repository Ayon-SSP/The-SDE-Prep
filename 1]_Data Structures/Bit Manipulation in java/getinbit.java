public class getinbit {
    public static int getibit(int n,int i){
        int bitmask=n<<i;
        if((n & bitmask)==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    public static void main(String args[]){
        System.out.println(getibit(7, 2));

    }
    
}
