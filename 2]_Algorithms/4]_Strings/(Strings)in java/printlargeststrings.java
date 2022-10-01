public class printlargeststrings {
    public static void main(String args[]){
        String fruits[]={"xpple","mango","banana"};
         String largest=fruits[0];
        for(int i=1;i<fruits.length;i++){
            System.out.println(i);
            if(largest.compareTo(fruits[i])<0){
                
                largest=fruits[i];

            }
        }
        System.out.println(largest);

    }
    
}
