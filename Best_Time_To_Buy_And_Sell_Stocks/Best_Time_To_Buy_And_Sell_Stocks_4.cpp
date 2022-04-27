class Solution {
public:
        int dp[100001][3];
    int solve(vector<int>&prices , int curr, bool canbuy){
        //base_case
        if(curr>=prices.size())
            return 0;
        if(dp[curr][canbuy]!=-1) {
                return dp[curr][canbuy];
        }
        //if possible to buy
        if(canbuy){
            //if choose to moving on to the next step
            int idle = solve(prices , curr+1,canbuy);
            //if choose to buy the stock
            int buy = -prices[curr]+solve(prices ,curr+1 ,false);
            dp[curr][canbuy] =  max(idle,buy);
        }
        
        else
        {
            //if choose to move on
            int idle = solve(prices , curr+1,canbuy);
            //if choose to sell..curr+2 cos there is a cool down period of one day
            int sell = prices[curr]+solve(prices,curr+2,true);
              dp[curr][canbuy] = max(sell,idle);
        }
        return  dp[curr][canbuy];
    }
    int maxProfit(vector<int>& prices) {
         memset(dp,-1,sizeof(dp));
         //dp step
        return solve(prices , 0 , true );
    }
};