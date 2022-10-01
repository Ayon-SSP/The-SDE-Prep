import java.util.*;
public class Pairsum1 {
 public static boolean Pairsum1(ArrayList<Integer> l1,int target){

    for(int i=0;i<l1.size();i++){
        for(int j=0;j<l1.size();j++){
            if(l1.get(i)+l1.get(j)==target){
                return true;
                
            }
        }
    }
    return false;
 }

    public static void main(String[] args) {
        ArrayList<Integer> l1= new ArrayList<>();
        l1.add(1);
        l1.add(2);
        l1.add(3);
        l1.add(4);
        l1.add(5);
        l1.add(6);
        int target =11;
        System.out.println(Pairsum1(l1, target));
    }
    
}
