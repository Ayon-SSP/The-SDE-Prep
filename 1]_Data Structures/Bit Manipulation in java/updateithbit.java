public class updateithbit {
    // clear in bit 

public static int clearbit(int n,int i){
    int bitmask=~(1<<i);
    return n&bitmask;}

// set in bit 

public static int setinbit(int n, int i){
    int bitmask=n<<i;
    return n| bitmask;
    }

public static int updateithbit(int n, int i, int newbit)
{
if(newbit==0){
    return clearbit(n, i);

}
else{
    return setinbit(n, i);
}
}   
public static void main(String args[]) {
    System.out.println(updateithbit(2,2,1));
    
}
}
