public class hollowrectangle {
    public static void hollow_rectange( int rows,int cols)
    {
        for(int i=1;i<=rows; i++)//outerloop
        {
            for(int j=1;j<=cols;j++){//innerloop
                if( i==1||i==rows ||j==1||j==cols){
                    System.out.print("*");

                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
       
    }
    public static void main(String args[])
    {
        hollow_rectange(7,7);
    }
  
    
}
