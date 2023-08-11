class Solution {
public:

     int dp[302][5002];
    int help(vector<int>& coins,int amount,int n)
    {
         if(amount==0)
          return 1;
         if(amount<0 || n<=0)return 0;
        if(dp[n-1][amount]!=-1)return dp[n-1][amount];
        
        if(coins[n-1]<=amount)
            return dp[n-1][amount]=help(coins,amount-coins[n-1],n)+help(coins,amount,n-1);
        else
            return dp[n-1][amount]=help(coins,amount,n-1);
        
    }
    int change(int amount,vector<int>& coins)
    {
      memset(dp,-1,sizeof(dp));
        int n=coins.size();
        int res=help(coins,amount,n);
        return res;
    }
};