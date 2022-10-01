import java.util.Arrays;
public class assq4 {
    public static void main(String args[]){

        String str1="earth";
        String str2="heart";

        // convert them into lover case so that if we sort them we dont need to compare each element
        str1=str1.toLowerCase();
        str2=str2.toLowerCase();
        // first check if lengths are same
        if(str1.length()==str2.length()){
        // convert it into character array so that we can sort
        char str1chararray[]=str1.toCharArray();
        char str2chararray[]=str2.toCharArray();
        //sort two strings so that both sequence will be same
        Arrays.sort(str1chararray);
        Arrays.sort(str2chararray);
    // if the arrays are same then it is anagram
    boolean result=Arrays.equals(str1chararray,str2chararray);
    if(result){
        System.out.println(str1 +" and "+str2+" are anagrams");
    }
    else{
        System.out.println(str1+" and "+str2+" are  not anagrams");
    }

    }
    else{
        System.out.println(str1+" and "+str2+" are  not anagrams");
    }
}
    
}
