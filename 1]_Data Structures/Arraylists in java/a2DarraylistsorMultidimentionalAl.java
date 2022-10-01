 import java.util.*;
public class a2DarraylistsorMultidimentionalAl {
    public static void main(String args[]){
        ArrayList<ArrayList<Integer>> mainlist= new ArrayList<>();// creating mainlist
        ArrayList<Integer> sublist1=new ArrayList<>();
        sublist1.add(1);
        sublist1.add(2);
        mainlist.add(sublist1);
        ArrayList<Integer> sublist2=new ArrayList<>();
        sublist2.add(3);
        sublist2.add(4);
        mainlist.add(sublist2);
        for(int i=0;i<mainlist.size();i++){
            ArrayList<Integer> currentlist=mainlist.get(i);
            for(int j=0;j<currentlist.size();j++){
                System.out.print(currentlist.get(j)+" ");
            }   
            System.out.println();          
        }
        System.out.println(mainlist);
       
    }
    
}
