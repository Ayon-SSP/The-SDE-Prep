public class linearsearch {
    public static int linearSearch(int numarr[],int key){
        int start=0;
        int end=numarr.length;
        for(int i=start;i<end;i++ ){
            if(numarr[i]==key){
                return i;
            }

        }
        return -1;
    }

    public static void main(String args[]){
     int numarr[]={1,2,3,4,5,6,7};
     int key=0;
     System.out.println(" index number :"+ linearSearch(numarr,key));


    }
    
}
