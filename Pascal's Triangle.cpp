class Solution {
public:
    vector<vector<int>> generate(int n) {
        	vector<vector<int>>dp;
            dp.resize(n);
		dp[0].push_back(1);
	
		
			for (int i = 1; i < n; i++)
			{
				
				for (int j = 0; j < dp[i - 1].size() +1; j++)
				{
					if (j == 0 || j == dp[i - 1].size() )dp[i].push_back(1);
					else
					{
						dp[i].push_back(dp[i - 1][j - 1] + dp[i - 1][j]);
					}
				}
			}
            return dp;
    }
};
