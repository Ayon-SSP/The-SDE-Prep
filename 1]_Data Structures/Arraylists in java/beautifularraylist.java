import java.util.*;
public class beautifularraylist {
    public ArrayList<Integer> beautiful(int n){
        ArrayList<Integer> result=new ArrayList<>();
        Divideandconquer(1, 1, result, n);
        
        
        return result;}

        public static void print( ArrayList<Integer> result){
            for(int i=0;i<result.size();i++){
                System.out.print(result.get(i));
        }

    }
    public static void Divideandconquer( int start, int increment,ArrayList<Integer> result,int n){
        if(start + increment>n){
            result.add(start);
            return;
        }
        Divideandconquer(start, 2*increment, result, n);
        Divideandconquer(start+increment, 2*increment, result, n);
    }
    public static void main(String args[]){
        ArrayList<Integer> result=new ArrayList<>();
        int start, increment,n;
        Divideandconquer(1, 1, result, 5);

        print(result);
       
       
        
    }


}
