// public class printxpowern {
//     public static int power(int x,int n){
//         //base case
//         if(n==0){
//             return 1;
//         }
//         int nm1=power(x,n-1);
//         int pn=x*nm1;
//         return pn;
//         //return x*pow(x,n-1)//single line code

//     }
//     public static void main(String args[]){
//         System.out.println(power(2, 5));



 public class printxpowern {
  public static int optimalpow(int x,int n){
    if(n==0){
        return 1;
    }
    int halfpow=optimalpow(x, n/2);
    int optimalpow=halfpow*halfpow;
    if(n%2!=0){
        optimalpow=x*optimalpow;
    }
    return optimalpow;
               
    }
    public static void main(String args[]){
        int x=2;
        int n=5;
        System.out.println(optimalpow(x, n));
    }
    
}
