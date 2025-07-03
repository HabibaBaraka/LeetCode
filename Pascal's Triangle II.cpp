class Solution {
public:
    vector<int> getRow(int n) {
       vector<int>dp(n+1);
       dp={1};
	
		
			for (int i = 1; i <= n; i++)
			{
				vector<int>a;
				for (int j = 0; j < dp.size() +1; j++)
				{
					if (j == 0 || j == dp.size() )a.push_back(1);
					else
					{
						a.push_back(dp[j - 1] + dp[j]);
					}
				}
                dp=a;
			}
       return dp;
    }
};
