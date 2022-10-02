import java.util.*;
public class practice {





    public static void main(String args[]){

        //====REPLACE ALL METHOD
        // String str="saiikiran".replace("i","");
        // System.out.println(str);
        // String str2="saikiran";
        // String str3= str2.replaceAll("i"," ");
        // System.out.println(str3);

        //----------------------
        //TO LOWERCASE AND UPPERCASE
        // String str="saikiran";
        // String  str1="APNACOLLEGE";
        // String str2=str.toUpperCase();
        // String str3 =str1.toLowerCase();
        // System.out.println(str+ " "+ str2);
        // System.out.println(str1  + " "+ str3);

        //--------------------------------
        //SubSequence
        // String str="saikiran";
        // System.out.println(str.subSequence(0,3));
        
        //---------------------------------
        //
		// String s1 = new String("pankaj");
		// String s2 = new String("PANKAJ");
		// System.out.println(s1 = s2); // simply passing s2 to s1 and printind s1

          //  String s1 = new String("abc");
          // String s2 = new String("abc");
          // System.out.println(s1 == s2);//false why becaue new keyword gives s1 ,s2 different reference 

        //   String str="abc";
        //   String str1="abc";
        //   System.out.println(str == str1);// true because new keyword is not there and both references are same
// String s1 = "abc";
// StringBuffer s2 = new StringBuffer(s1);
// System.out.println(s1.equals(s2));// s1(string ) is not equals to s2(stringbuilder) false
// System.out.println(s1.equals(s2.toString()));// s1 & s2 are strings true
String s1 = "abc";
String s2 = new String("abc");
s2.intern();//we have interned but not stored in s2//false
s2=s2.intern();//reference is returned to s2 //true

System.out.println(s1 ==s2);

	




    }
    
}
