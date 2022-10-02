public class reverseastring {
    public static void reversestring(String str, int idx){
        //base case
        if(idx==0){
            System.out.println(str.charAt(idx));
            return;
        }
        System.out.println(str.charAt(idx));
        reversestring(str, idx-1);
    }
    public static void main(String args[]){
        String str="saikiran";
        reversestring(str, str.length()-1);
    }
    
}
