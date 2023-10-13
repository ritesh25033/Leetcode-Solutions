class Solution {
public:
   
    int minCostClimbingStairs(vector<int>& cost) {
      
        int n=cost.size();
        int dp1=0,dp2=0;
        for(int i=n-1;i>=0;i--){
           int dpi=min(dp1,dp2)+cost[i];
            dp2=dp1;
            dp1=dpi;
        }
        return min(dp1,dp2);
    }
};