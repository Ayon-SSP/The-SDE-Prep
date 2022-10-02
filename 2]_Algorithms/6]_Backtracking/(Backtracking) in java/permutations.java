public class permutations {

    public static void permutations(String str,String ans){
        // base case
        if(str.length()==0){
            System.out.println(ans);
            return;
        }
        // recursion using string builders
        for(int i=0;i<str.length();i++){
            char currchar=str.charAt(i);
        String newStr = str.substring(0,i) +str.substring(i+1, str.length());
        permutations(newStr, ans+currchar);
    }    
}
    public static void main(String args[]){
        String str="abc";
        permutations(str, " ");
        

    }
    
}
