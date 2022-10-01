import java.util.*;
public class mostrepeatednumber {
public static int printans(ArrayList<Integer>l1 , int key){
    int count[]=new int[500];
    for(int i=0;i<l1.size()-1;i++){
        if(l1.get(i)==key){
            count[l1.get(i+1)-1]++;
        }    
    }
    int max=Integer.MIN_VALUE;
    int ans=0;
    for(int i=0;i<500;i++){
        if(count[i]>max){
            max=count[i];
            ans=i+1;
        }
    }
    return ans;


}

    public static void main(String args[])
    {
        ArrayList<Integer>l1=new ArrayList<>();
        l1.add(1);
        l1.add(100);
        l1.add(200);
        l1.add(1);
        l1.add(100);
        l1.add(200);
        int key=1;
        System.out.println(printans(l1, key));

    }
    
}
