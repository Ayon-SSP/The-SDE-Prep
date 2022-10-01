public class smllestinarray {
    public static int smallestvalue( int numarr[]){
        int smallest =Integer.MAX_VALUE;
        for(int i=0;i<numarr.length;i++){
            if(smallest>numarr[i]){
                smallest=numarr[i];

            }
            

        }
        return smallest;

    }
    public static void main(String args[]){
        int numarr[]={1,2,3,4,5,6};
        System.out.println("smallest  value :"+ smallestvalue(numarr));
    }
    
}
