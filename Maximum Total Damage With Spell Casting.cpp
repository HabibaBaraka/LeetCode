class Solution {
public:
#define ll long long 
 map<ll,ll>mp;
ll dp[100009];
int n;
ll a[100009];
ll clc(int i=0)
{
    // base case 
if(i>=n)return  0;
ll&ret=dp[i];
if(~ret)return ret;

    // transition 
    ret=0;
    
   ret=max(ret,clc(i+1));
   ll x=i+1<n?a[i+1]:-1;;
   ll y=i+2<n?a[i+2]:-1;
   if (x!=-1&&x==a[i]+1)
   {
    if(y!=-1&&y==a[i]+2)
    {
        ret=max(ret,clc(i+3)+mp[a[i]]);
    }
    else ret=max(ret,clc(i+2)+mp[a[i]]);
   }
   else if(x!=-1&&x==a[i]+2)
   {
    ret=max(ret,clc(i+2)+mp[a[i]]);
   }
   else ret=max(ret,clc(i+1)+mp[a[i]]);
    return ret;
}
    long long maximumTotalDamage(vector<int>& p) {
       
        for(auto it:p)mp[it]++;
        int i=0;
        for(auto &it:mp)
        {
            a[i]=it.first;
           it.second*=it.first;
         i++;
        }
        memset(dp,-1,sizeof dp);
        n=mp.size();
        return clc();
    }
};
