public class convertnumbertostring {

    //create string
    static String digits[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    public static void printstring(int nbr){
        //base case
        if(nbr==0){
            return;
        }
        int lastdigit=nbr%10;// pick lastdigit
        printstring(nbr/10);//update nmbr
        //print number
        System.out.print(digits[lastdigit]+ " ");
    }
    public static void main(String args[]){
        printstring(2002);
    }
    
}
