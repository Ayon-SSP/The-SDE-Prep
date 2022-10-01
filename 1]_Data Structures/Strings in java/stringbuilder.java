import java.util.*;
public class stringbuilder {
    public static void main(String args[]){
        StringBuilder sb= new StringBuilder("");
        for(char ch='a';ch<='z';ch++){// time complexity=o(26) or O(n^2)
            sb.append(ch);
        }
        System.out.println(sb);
        System.out.println(sb.length());


        

    }
    
}
