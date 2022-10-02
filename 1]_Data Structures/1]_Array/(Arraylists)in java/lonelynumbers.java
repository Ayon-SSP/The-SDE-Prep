import java.util.*;
public class lonelynumbers {
   public static ArrayList<Integer> lonelyNumbers( ArrayList<Integer>l1){
    Collections.sort(l1);
    ArrayList<Integer> l2= new ArrayList<>();
    int n=l1.size();
    
    for(int i=1;i<n-1;i++){
        if(l1.get(i-1)+1 < l1.get(i) && l1.get(i)+1 < l1.get(i+1)){
           l2.add(l1.get(i));
        }

         if(n==1){
            l2.add(l1.get(0));

         }
         if(n>1){
            if(l1.get(0)+1<l1.get(1)){
                l2.add(l1.get(0));
            }
            if(l1.get(n-2)+1<l1.get(n-1)){
                l2.add(l1.get(n-1));
            }
         }
            
    }
    for(int j=0;j<l2.size()-1;j++){
        System.out.println(l2.get(j));
    }
   
    return l2;
    
   
    
   
    
   }

    public static void main(String[] args) {
        ArrayList<Integer>l1=new ArrayList<>();
        l1.add(10);
        l1.add(6);
        l1.add(5);
        l1.add(12);
        

        lonelyNumbers(l1);
       
       
       
       

    }
    
}
