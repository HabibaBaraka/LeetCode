class Solution {
public:
const int N = 1e4 + 4;
#define ll long long 
int n;
ll dp[10007];
vector<int>a;

ll jump(int i = 0)
{
	// base case 
	if (i >= n)return INT_MAX;
	if (i == n - 1)return 0;
	ll& ret = dp[i];
	if (~ret)return ret;
	// transition 
	ret = INT_MAX;
	
	for (int j = 1; j <= a[i]; j++)
	{
		ret = min(ret, jump(i + j) + 1);
	}
	return ret;
}
    int jump(vector<int>& nums) {
        a=nums;
        n=nums.size();
        memset(dp,-1,sizeof dp);
        return jump();
    }
};
