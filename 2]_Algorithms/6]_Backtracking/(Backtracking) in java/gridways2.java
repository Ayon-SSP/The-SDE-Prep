public class gridways2 {
    public static int fact(int n){
        if(n==0){
            return 1;
        }
        return n*fact(n-1);
    }
    public static int gridways(int n,int m){
        int nm1f=fact(n-1);
        int mm1f=fact(m-1);
        int totf= fact(n-1+m-1);
        return totf/(nm1f+mm1f);
        
     
    }
    public static void main(String args[]){
        int n=3,m=3;
     System.out.println(gridways(n, m));
        

    }
    
}
