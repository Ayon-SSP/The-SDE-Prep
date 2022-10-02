public class friendspairing {
    public static int friendspairing(int n){
        // base case
        if(n==1||n==2){
            return n;
        }
        //work 
        // // single
        // int fnm1=friendspairing(n-1);
        // //pairs
        // int fnm2=friendspairing(n-2);
        // int pairs=(n-1)*fnm2;
        // int totpairs=fnm1+pairs;
        // return totpairs;
        return friendspairing(n-1)+(n-1)*friendspairing(n-2);
    }
    public static void main(String args[]){
        System.out.println(friendspairing(3));
    }
    
}
