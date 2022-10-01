public class stringbasics {
    public static void main(String args[]){
        String str1="saikiran";
        String str2="saikiran";
        String str3= new String("saikiran");
        if(str1 == str2){
            System.out.println(" strings are same");// str1 and str2 are same because they are not created with a new keyword to allocate 
        }                                                          // word to new memory location 
        else{
            System.out.println(" strings are not same");
        }
        if(str1==str3){
            System.out.println("strings are same");// here s1 &s3 are not same s1 is simply defined and s3 is newly defined so both are not same
        }
        else{
            System.out.println("strings are not same");
        }

    }
    
}
