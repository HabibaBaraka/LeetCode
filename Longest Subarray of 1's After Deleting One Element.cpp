class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int n=v.size();
        vector<int>z;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)z.push_back(i);
        }
        int mx=0;

        for(int i=0;i<n;)
        {
            if(v[i]==1)
            {
            int j=i;
           
            int cnt=0;
            while(j<n)
            {
               if(v[j]==0)
               {
               int l=j,r=upper_bound(z.begin(),z.end(),j)-z.begin();
                if(r==z.size())r=n;
               else r=z[r];
               cnt+=(r-l)-1;
               break;
               }
               else cnt++;
               j++;
             
            }
             mx=max(mx,cnt);
             i=j;
            }
            else i++;
           
        }
     if(mx==n)return n-1;else  return mx;
    }
};
