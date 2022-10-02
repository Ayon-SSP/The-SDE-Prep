import java.util.*;
public class multidimentionalarraylist {
    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>> mainlist = new ArrayList<>();
        //sublists
        ArrayList<Integer> list1=new ArrayList<>();
        ArrayList<Integer> list2=new ArrayList<>();
        ArrayList<Integer> list3=new ArrayList<>();
        mainlist.add(list1);
        mainlist.add(list2);
       
        mainlist.add(list3);

        // adding elements int lists uding loop
        for(int i=1;i<=5;i++){
            list1.add(1*i);// 1 table
            list2.add(2*i);// 2 table
            list3.add(3*i);//3 table
       }
       // printing using nested loops
       for(int i=0;i<mainlist.size();i++){
        ArrayList<Integer> currlist= mainlist.get(i);
        for(int j=0;j<currlist.size();j++){
           System.out.print(currlist.get(j)+" ");
        }
        System.out.println();
       }
       //printing directly
       System.out.println(mainlist);
       list2.remove(0);
       list2.remove(1);
       System.out.println(mainlist);

        
    }
    
}
