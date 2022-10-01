import java.util.ArrayList;
import java.util.List;

public class creatingarraylist {
    public static void main(String args[]){
        //array list creation
        ArrayList <Integer> List = new ArrayList<>();
        //OPERATIONS like 1) set 2)get 3)contains 4)remove 5) add
        //Add Operation
        List.add(1); // or List.add(0,1);
        List.add(2);// or List.add(1,2);
        List.add(3);
        List.add(4);
        System.out.println( "add "+List);
        // set operation
        List.set(0,10);
        List.set(1,20);
        List.set(2,30);
        List.set(3,40);
        System.out.println("set"+ List);
        //get Operations
        System.out.print( "get "+List.get(0)+" ");
        System.out.print(List.get(1)+" ");
        System.out.print(List.get(2)+" ");
        System.out.print(List.get(3)+" ");
        // remove Operations
        List.remove(1);
        List.remove(2);
        System.out.println( "remove "+List);
        //contains operation
        System.out.println(List.contains(10));
        System.out.println(List.contains(11));
       


    }
    
}
