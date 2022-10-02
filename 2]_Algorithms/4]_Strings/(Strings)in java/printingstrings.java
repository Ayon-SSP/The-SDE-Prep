public class printingstrings {

    public static void printstring(String Fullname){
        for(int i=0;i<Fullname.length();i++){
            System.out.print(Fullname.charAt(i)+" ");
        }

    }
    public static void main(String args[]){
        String f_name="tony";
        String S_name="stark";
        String Fullname=f_name +" "+S_name;
        
        printstring(Fullname);

    }
    
    
}
