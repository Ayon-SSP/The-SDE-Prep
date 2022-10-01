public class findsubstrings {

    public static void substrings(String str,String ans,int i){
        // base case
        if(i==str.length()){  
            if(ans.length()==1){
                System.out.println("null");
              }else{
                System.out.println(ans);
              }        
            return;
              }
              
              // Yes recursion
              substrings(str, ans+str.charAt(i), i+1);
              //no recursion
              substrings(str, ans, i+1);
             
    }
    public static void main(String args[]){
        String str= "abc";
        substrings(str, " ", 0);
    }
    
}
