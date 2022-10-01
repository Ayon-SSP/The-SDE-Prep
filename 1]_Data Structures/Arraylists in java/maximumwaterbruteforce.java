import java.util.*;
public class maximumwaterbruteforce {
    public static int maxwater(ArrayList<Integer> height){
        int MaxWater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int ht=Math.max(height.get(i),height.get(j));// height = max of 2 heights
                int weight=j-i;
                int currentwater=ht*weight;
                MaxWater=Math.max(MaxWater,currentwater);

            }
        }
        return MaxWater;
    }


    public static void main(String[] args) {
        
        ArrayList<Integer> height=new ArrayList<>();
        height.add(1);
        height.add(8);
        height.add(6);
        height.add(2);
        height.add(5);
        height.add(4);
        height.add(8);
        height.add(7);
        System.out.println(maxwater(height));

    }
    
}
