class Solution {
public:
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const int N = 500 + 4;
const ll mod = 1e9 + 7;
ll dp[100];
vector<int>a;
int n;
ll calc(int i = 0)
{
	// base case 
	if (i >= n)return 0;
	ll& ret = dp[i];
	if (~ret)return ret;
	// transition 
	return ret = max(calc(i + 1), calc(i + 2) + a[i]);
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        a=nums;
        n=a.size();
        return calc();
    }
};
