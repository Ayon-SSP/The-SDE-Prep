public class nmbfrom1ton {
    public static  void decreasing(int n){
        if(n==1){
            System.out.print(n+" ");
            return ;
        }
        System.out.print(n+"");
        decreasing(n-1);
        
    }
    public static void main(String args[]){
        int n=5;
        decreasing(n);
    }
    
}
