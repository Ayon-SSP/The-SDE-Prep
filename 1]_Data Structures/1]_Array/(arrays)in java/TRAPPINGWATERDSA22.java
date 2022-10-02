public class TRAPPINGWATERDSA22 {
    public static int trappingwater(int height[]){
        //calculate maxleftboundary
        int  maxleftboundary[]=new int[height.length];
        maxleftboundary[0]=height[0];// first number
        for(int i=1;i<height.length;i++){// i=1 : after first number
            maxleftboundary[i]=Math.max(height[i],maxleftboundary[i-1]); // height[i] and before numbers
        }
        
        //calculate rightboundary
        int maxrightboundary[]=new int[height.length];
        maxrightboundary[height.length-1]=height[height.length-1];// height.length-1 ==lastnumber
        for(int i=height.length-2;i>=0;i--){// before lastnumber= (height.length-2 )
            maxrightboundary[i]=Math.max(height[i], maxrightboundary[i+1]); // height[i] and after numbers
        }

        //  loop for  waterlevel==min(maxleftboundary,rightboundary)
        int trappedwater=0;
        for(int i=0;i<height.length;i++){
        int waterlevel=Math.min( maxleftboundary[i], maxrightboundary[i]);
        //trapped water = waterlevel - height
        trappedwater+=waterlevel-height[i] *1;//1 is the width of boundary
        }
        return trappedwater;
        
    }
    public static void main(String args[]){
        int height[]={4,2,0,6,3,2,5};
        System.out.println(" trappingwater is : "+trappingwater(height));
    }
    
}
