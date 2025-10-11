class Solution {
public:
#define ll long long 
 map<ll,int>mp;
ll dp[10006];
int n;
int a[10000];
ll clc(int i=0)
{
    // base case 
if(i>=n)return  0;
ll&ret=dp[i];
if(~ret)return ret;

    // transition 
    ret=0;
    ret=max(ret,clc(i+1));
    if(i+1<n&&(a[i+1]>a[i]+1))
    {
    ret=max(ret,clc(i+1)+mp[a[i]]);
   
    }
    ret=max(ret,clc(i+2)+mp[a[i]]);
    return ret;
}
    int deleteAndEarn(vector<int>& p) {
        
        for(auto it:p)mp[it]++;
        int i=0;
       for(auto it:mp)
       {
        a[i]=it.first;
        mp[it.first]=it.first*it.second;
        i++;
       }
       memset(dp,-1,sizeof dp);
       n=mp.size();
         return clc();
    }
};
