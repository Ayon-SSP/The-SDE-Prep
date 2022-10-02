public class fabinaocciseries {
public static int fbn(int n){
    if (n==0|| n==1){
        return n;
    }
    
    int fbnm1=fbn(n-1);
    int  fbnm2=fbn(n-2);
    int fbn=fbn(n-1)+fbn(n-2);
    return fbn;
}




    public static void main(String args[]){
        int n=5;
       System.out.println( fbn(n));
    }
    
}
