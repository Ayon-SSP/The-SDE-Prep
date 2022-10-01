import java.util.*;
//Trapping rainwater problem
public class assq4 {
    
    public static int Trapping(int height[]){
        // trw= waterlevel-boundaryheight*width
        //waterlevel = min(maxleftbound,maxrightbound)
        //calculate max leftboundary
        int maxleftboundary[]=new int[height.length];
        maxleftboundary[0]=height[0];
        maxleftboundary[height.length-1]=height[height.length-1];
        for(int i=1;i<height.length-1;i++){
            maxleftboundary[i]=Math.max(height[i],maxleftboundary[i-1]);
        }
       
        int maxrightbound[]=new int[height.length];
        maxrightbound[0]=height[0];
        maxrightbound[height.length-1]=height[height.length-1];
        for(int i=height.length-2;i>=0;i--){
            maxrightbound[i]=Math.max(height[i],maxrightbound[i+1]);

        }
        

        int trappingwater=0;
        for(int i=0;i<height.length;i++){
           int waterlevel=Math.min(maxleftboundary[i], maxrightbound[i]);
            trappingwater+=waterlevel-height[i]*1;
        }
        return trappingwater;


    }

    public static void main(String args[]){
        int height[]= {0,1,0,2,1,0,1,3,2,1,2,1};
       System.out.println("trapping rainwater volume:"+Trapping(height));
        
      
   }
}
    

