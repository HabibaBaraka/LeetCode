class Solution {
public:
#define ll long long
const int N = 500 + 4;
const ll mod = 1e9 + 7;
int n, m;
string s, v;
int dp[505][505];

    int minDistance(string s, string v) {
        int n=s.size();
        int m=v.size();
      for (int i = 0; i <= n; i++)dp[i][0] = i;
for (int i = 0; i <= m; i++)dp[0][i] = i;
for (int i = 1; i <= n; i++)
{
	for (int j = 1; j <= m; j++)
	{
		if (s[i-1] == v[j-1])dp[i][j] = dp[i - 1][j - 1];
		else
		{
			dp[i][j] = min({ dp[i - 1][j - 1] + 1,dp[i - 1][j] + 1,dp[i][j - 1] + 1 });
		}
	}
}
    return  dp[n][m];
  
    }
};
