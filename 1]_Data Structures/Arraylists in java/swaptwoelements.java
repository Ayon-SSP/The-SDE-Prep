import java.util.ArrayList;

public class swaptwoelements {
    public static void swap(ArrayList<Integer> l1,int index1,int index2){
        int temp = l1.get(index1);
        l1.set(index1,l1.get(index2));
        l1.set(index2,temp);

    }
    public static void main(String args[]){
        ArrayList<Integer> l1=new ArrayList<>();
        l1.add(0,1);
        l1.add(1,3);
        l1.add(2,4);
        l1.add(3,5);
        l1.add(4,6);
        //System.out.println(" before swap:"+"index1= "+l1.get(1)+" index3= "+l1.get(3));
        int index1=1;
        int index2=3;
        // int temp= l1.get(index1);
        // l1.set(index1,l1.get(index2));
        // l1.set(index2,temp);
        //System.out.println(" after swap:"+"index1= "+l1.get(1)+" index3= "+l1.get(3));
        System.out.println(l1);
        swap(l1, index1, index2);
        System.out.println(l1);
       


    }
}
