public class TILINGPROBLEM {
    public static int tilingprob(int n){
        // base case
        if(n==0 || n==1){
            return 1;
        }
        //work what to do
        //vertical -> f(n-1)
        // int fnm1vertical=tilingprob(n-1);

        // // horizontal _> f(n-2)
        // int fnm2horizontal =tilingprob(n-2);
        
        // //total ways
        // int totways= fnm1vertical + fnm2horizontal;
        // return totways;
        return tilingprob(n-1)+tilingprob(n-2);
    }
    public static void main(String args[]){
        System.out.println(tilingprob(4));
    }
    
}
