import java.util.ArrayList;

public class sizeofarraylist {
    public static void main(String args[]){
        ArrayList<String> names= new ArrayList<>();
        names.add(0,"a");
        names.add(1,"b");
        names.add(2,"c");
        names.add(3,"d");
        System.out.println(names.size());
        for(int i=0;i<names.size();i++){
            System.out.println(names.get(i));
        }


    }
    
}
