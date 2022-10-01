public class removeduplicatesinstring {
    public static void removeduplicate(String str,int idx,StringBuilder sb,boolean map[]){
        // base case
        if(idx==str.length()){
            System.out.println(sb);
            return;
        }
        //work to do
        //compare current element
        char currchar=str.charAt(idx);

        if(map[currchar-'a']==true){
            removeduplicate(str, idx+1, sb, map);

        }
        else{
         map[currchar -'a'] = true;
            removeduplicate(str, idx+1, sb.append(currchar), map);
        }
    }
    public static void main(String args[]){
        String str="appnnacoolleggge";
        removeduplicate(str, 0, new StringBuilder(""), new boolean[26]);

    }
    
}
