class Solution {
public:
#define ll long long
ll  dp[200005];
    int maxSubArray(vector<int>& a) {
        dp[0] = a[0];
ll  mx = a[0];
int n=a.size();
for (int i = 1; i < n; i++)
{
	dp[i] = max(dp[i - 1] + a[i],(ll)a[i]);
	mx = max(mx, dp[i]);
}
return mx;
    }
};
