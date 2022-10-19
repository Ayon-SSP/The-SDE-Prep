class Solution {
public:
    int bestTrans(vector<int>&prices,int curr,bool canbuy , int trans,vector<vector<vector<int>>>&vec)
    {
        
        if(curr>=prices.size()) return 0;
        if(trans<=0) return 0;
        if(vec[curr][canbuy][trans]!= -1)
           return vec[curr][canbuy][trans];
        if(canbuy)
        {
            int idle = bestTrans(prices,curr+1,canbuy,trans,vec); 
            int buy = -prices[curr]+bestTrans(prices,curr+1,!canbuy,trans,vec);
            return vec[curr][canbuy][trans]=max(idle,buy);
        }
        else{
            int idle1 = bestTrans(prices,curr+1,canbuy,trans,vec);
            int sell = prices[curr]+bestTrans(prices,curr+1,canbuy,trans-1,vec);
            return vec[curr][canbuy][trans]=max(idle1,sell);
        }
        
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> vec(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
        return bestTrans(prices,0,1,1,vec);
        
    }
};
