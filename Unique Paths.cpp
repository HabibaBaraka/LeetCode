class Solution {
public:
#define ll long long 
ll dp[200][200];
int n,m;
ll robot(int i, int j)
{
	// base cace 
	if (i == n - 1 && j == m - 1)return 1;
	if (i >= n || j >= m)return 0;
	ll& ret = dp[i][j];
	if (~ret)return ret;
	// transition 
	return ret = robot(i + 1, j) + robot(i, j + 1);

}
    int uniquePaths(int k, int l) {
        n=k,m=l;
        memset(dp,-1,sizeof dp);
        return robot(0,0);
    }
};
