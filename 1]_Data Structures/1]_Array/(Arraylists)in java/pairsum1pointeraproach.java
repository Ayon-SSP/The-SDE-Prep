import java.util.*;
public class pairsum1pointeraproach {
    public static boolean Pairsum1(ArrayList<Integer> l1, int target){
        int lp=0;
        int rp=l1.size()-1;
        while(lp<=rp){
            if(l1.get(lp)+l1.get(rp)==target){
                return true;
            }
            else if(l1.get(lp)+l1.get(rp)<target){
                lp++;
            }
            else{
                rp--;
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
