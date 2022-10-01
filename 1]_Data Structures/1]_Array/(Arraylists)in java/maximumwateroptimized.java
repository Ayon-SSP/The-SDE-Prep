import java.util.*;
public class maximumwateroptimized {
    public static int maxwater(ArrayList<Integer> height){
        //globally maxwater=0
        int MaxWat=0;
        int lp=0;
        int rp=height.size()-1;
        while(lp<rp){
        //calculate max water
        int ht=Math.max(height.get(lp),height.get(rp));
        int width= rp-lp;
        int currwater= ht*width;
        MaxWat=Math.max(currwater,MaxWat);
        
        // update pointer
        if(height.get(lp)<height.get(rp)){
            lp++;
        }
        else{
            rp--;
        }
    }
    return MaxWat;
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
