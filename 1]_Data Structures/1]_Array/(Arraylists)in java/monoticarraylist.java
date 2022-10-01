import java.util.ArrayList;
import java.util.*;
public class monoticarraylist {
   public static boolean monotic(ArrayList<Integer> l1){
    int n=l1.size();
    boolean inc=true;
    boolean dec=true;
    for(int i=0;i<n-1;i++){
            if(l1.get(i)>l1.get(i+1)){
                inc = false;
            }
            else if(l1.get(i)<l1.get(i+1)){
                dec= false;
            }
        
    }
    return inc | dec;
   }

    public static void main(String[] args) {
        ArrayList<Integer> l1= new ArrayList<>();
        l1.add(1);
        l1.add(2);
        l1.add(2);
        l1.add(3);
      System.out.println(monotic(l1));
    }
    
}
