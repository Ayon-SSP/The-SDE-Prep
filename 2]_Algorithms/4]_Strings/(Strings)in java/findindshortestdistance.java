public class findindshortestdistance {
    public static float getshortestpath(String path){
        int x=0,y=0;
        for(int i=0;i<path.length();i++){
            //north
            if(path.charAt(i)=='N'){
                y++;
            }
            //south
            if(path.charAt(i)=='S'){
                y--;
            }
            if(path.charAt(i)=='W'){
                x--;
            }
            if(path.charAt(i)=='E'){
                x++;
            }

        }
        int x2=x*x;
        int y2=y*y;
        
       return((float)Math.sqrt(x2+y2));

    }

    public static void main(String args[]){
        String path="SN";
        System.out.println(getshortestpath(path));

    }
    
}
