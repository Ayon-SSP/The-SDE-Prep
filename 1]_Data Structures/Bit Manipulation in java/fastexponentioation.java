public class fastexponentioation {
    public static int fe(int a,int n){
        int ans=1;
        while(n>0){
            if((n &1)!=0){
                ans=ans*a;
            }
            a=a*a;
            n=n>>1;
        }
        return ans;
    }

    public static void main(String args[]){
        System.out.println(fe(5,3));
    }
    
}
