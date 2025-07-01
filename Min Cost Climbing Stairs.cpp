class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
       int dp[1001] = {};int n=cost.size();
 dp[n] = 0;
 dp[n - 1] = cost[n - 1];
 for (int i = n - 2; i >= 0; i--)
 {
     dp[i] = min(dp[i + 1], dp[i + 2]) + cost[i];
 }
return min(dp[0], dp[1]);
    }
};
