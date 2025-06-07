class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int t) {
        sort(v.begin(),v.end());
         int n=v.size();
vector<vector<int>>ans;
for(int i=0;i<n-3;i++)
{
    if(i>0&&v[i]==v[i-1])continue;
    for(int j=i+1;j<n-2;j++){
    if(j>i+1&&v[j]==v[j-1])continue;
    int l=j+1;
    int r=n-1;
    while(l<r)
    {
        long long sum= (long long)v[l]+v[r]+v[i]+v[j];
        if(sum==t)
        {
            ans.push_back({v[l],v[r],v[i],v[j]});
            while(l<r&&v[l]==v[l+1])l++;
            while(l<r&&v[r]==v[r-1])r--;
            l++;
            r--;
        }
        else if(sum<t)
        {
            l++;
        }
        else r--;
    }
    }
}
        
   return ans; }
};
