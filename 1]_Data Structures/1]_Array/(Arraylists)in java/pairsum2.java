import java.util.*;
public class pairsum2 {
public static boolean Pairsum1(ArrayList<Integer> l1,int target){
    // case 1
    int breakingpoint= -1;
    for(int i=0;i<l1.size();i++){
        if(l1.get(i)>l1.get(i+1)){
            breakingpoint=i;
            break;
        }
    }
    int lp=breakingpoint+1;
    int rp=breakingpoint;
    // case 2 modular operations
    while(lp!=rp){
    if(l1.get(lp)+l1.get(rp)==target){
        return true;
    }
    else if(l1.get(lp)+l1.get(rp) <target){
        lp=(lp+1)%l1.size();
    }
    else{
        rp=(l1.size() +rp -1)%l1.size();
    }
    }
    return false;

}

    public static void main(String[] args) {
        ArrayList<Integer> l1= new ArrayList<>();
        l1.add(11);
        l1.add(15);
        l1.add(6);
        l1.add(8);
        l1.add(9);
        l1.add(10);
        int target =16;
        System.out.println(Pairsum1(l1, target));
    }
    
}
