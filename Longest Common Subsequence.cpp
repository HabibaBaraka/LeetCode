class Solution {
public:
int dp[2000][2000];
string a,b;
int LCS(int i=0,int j=0)
{
    // base case 
    if(i==a.size()||j==b.size())return 0;
    int&ret=dp[i][j];
    if(~ret)return ret;
    //transition
    if(a[i]==b[j])
    {
        return ret=LCS(i+1,j+1)+1;
    }
    return ret=max(LCS(i+1,j),LCS(i,j+1));
}
    int longestCommonSubsequence(string t1, string t2) {
        a=t1,b=t2;
        memset(dp,-1,sizeof dp);
        return LCS();
    }
};
