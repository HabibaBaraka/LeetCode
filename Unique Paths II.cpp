class Solution {
public:
#define ll long long 
vector<vector<int>>a;
int n,m;
ll dp[102][102];
ll robot(int i=0,int j=0)
{
    // base case 
    if(i>=n||j>=m||a[i][j]==1)return 0; 
if(i==n-1&&j==m-1)return 1;

ll &ret =dp[i][j];
if(~ret)return ret;
    // transition 
   return  ret=robot(i,j+1)+robot(i+1,j);
}
    int uniquePathsWithObstacles(vector<vector<int>>& b) {
        memset(dp,-1,sizeof dp);
        a=b;
n=a.size(),m=a[0].size();
return robot();
    }
};
