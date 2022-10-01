import java.util.Collections;
import java.util.ArrayList;
public class sorting {
    public static void main(String args[]){
        ArrayList <Integer> l1= new ArrayList<>();
        l1.add(1);
        l1.add(7);
        l1.add(6);
        l1.add(5);
     // Print actual list
     System.out.println("Normal list: "+l1);
     // sorting ascending order
     Collections.sort(l1);
     System.out.println("ascending order: "+l1);
     // sorting descending order
     Collections.sort(l1,Collections.reverseOrder());
     System.out.println("descending order "+l1);
    }
    
}
