import java.util.*;
public class findmaxinarraylist {
    public static void main(String args[]){
        ArrayList<Integer> list= new ArrayList<>();
        list.add(0,1);
        list.add(1,5);
        list.add(2,12);
        list.add(3,99);
        int max= Integer.MIN_VALUE;
        for(int i=0;i<list.size();i++){
            if(list.get(i)>max){
                max=list.get(i);
            }
        }
        System.out.println( " max value is: "+max);
    }

    
}
