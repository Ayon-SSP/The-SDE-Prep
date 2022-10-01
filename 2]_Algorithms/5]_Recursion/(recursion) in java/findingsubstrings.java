public class findingsubstrings {
    public static int printsubstring(String str,int i,int j,int n){
        if(n<=0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    int subs=printsubstring(str, i+1, j, n-1)+ printsubstring(str, i, j-1, n-1)-printsubstring(str, i+1, j-1, n-2);
 if(str.charAt(i)==str.charAt(j)){
    subs++;
 }
return subs;
    }
    public static void main(String args[]){
        String str="aba";
        int n=str.length();
       System.out.println( printsubstring(str, 0, n-1, n));

    }
    
}
