public class substrings {

    public static String printsubstring(String str,int si,int ei){
        String substring ="";// empty string
        for(int i=si;i<ei;i++){
            substring+=str.charAt(i);

        }
        return substring;
    }
    public static void main(String args[]){
        String str="saikiran";
    //    System.out.println( printsubstring(str,0,5));
    
    //JAVA contains inbuilt substring function str.substring(si,ei)

        System.out.println(str.substring(0,5));


    }
    
}
