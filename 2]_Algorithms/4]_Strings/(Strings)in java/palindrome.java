import java.util.Scanner;
public class palindrome {
    // public static boolean ispolindrome(String pdrome){
    //     int n=pdrome.length();
    // for(int i=0;i<n/2;i++){
    //     if(pdrome.charAt(i)!=pdrome.charAt(n-1-i)){
    //         return false;
    //     }
    // }
    // return true;}

    // PALINDROME USING STRING BUILDER

    public static boolean ispdrome(String pdrome){//passed string
        if(pdrome==null)// if no charactrs false
        return false;
        StringBuilder sb= new StringBuilder(pdrome);// created strring builder  with string(user entered)
        sb.reverse();
        System.out.println(sb+".");
        System.out.println(pdrome);
        return sb.toString().equals(pdrome);


    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        String  pdrome=sc.nextLine();
        System.out.println(pdrome);
       System.out.println( ispdrome(pdrome));

    }

}
