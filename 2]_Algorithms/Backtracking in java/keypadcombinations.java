public class keypadcombinations {
    final static char L[][]={{},{},{'a','b','c'},
                            {'d','e','f'},
                            {'g','h','i'},
                            {'j','k','l'},
                            {'m','n','o'},
                            {'p','q','r','s'},
                            {'t','u','v'},
                            {'w','x','y','z'}};
public static void lettercombinations(String d){
int len=d.length();
if(len==0){
    System.out.println("");
    return;
}
bfa(0,len,new StringBuilder(),d);
}
public static void bfa(int pos, int len , StringBuilder sb,String d){
    if(pos==len){
        System.out.println(sb.toString());
    }
    else{
        char letters[]=L[Character.getNumericValue(d.charAt(pos))];
        for(int i=0;i<letters.length;i++){
            bfa(pos+1, len, new StringBuilder(sb).append(letters[i]), d);
        }
    }
}
public static void main(String args[]){
    lettercombinations("23");

}
}
