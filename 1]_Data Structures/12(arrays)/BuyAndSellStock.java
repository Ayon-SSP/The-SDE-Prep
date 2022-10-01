public class BuyAndSellStock {
    public static int Stocks(int prices[]){
        int buyprice= Integer.MAX_VALUE;// maxvalue e.g: 200
        int maxprofit=0;
        for(int i=0;i<prices.length;i++){
            if(buyprice<prices[i]){// if 200< today price (250) then profit=250-200
                 int profit=prices[i]-buyprice;//profit=sellprice-buyprice
                maxprofit=Math.max(maxprofit,profit); // gives the maximum  of profit and maxprofit
            }
            else{// if 200>150  then 150 is updated to buyprice
                buyprice=prices[i];
            }

        }
        return maxprofit;
    }
public static void main(String args[]){
    int prices[]={7,1,5,3,6,4};
    System.out.println( " total max profit : "+Stocks(prices));
}
    
}
