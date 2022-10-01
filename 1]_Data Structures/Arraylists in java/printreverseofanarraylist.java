import java.util.*;
public class printreverseofanarraylist {
    public static void main(String args[]){
        ArrayList<Integer>l1=new ArrayList<>();
        l1.add(0,0);
        l1.add(1,1);
        l1.add(2,2);
        l1.add(3,3);
        l1.add(4,4);
        int N=l1.size();
        for(int i=N-1;i>=0;i--){
            System.out.println(l1.get(i));
        }

    }
    
}
