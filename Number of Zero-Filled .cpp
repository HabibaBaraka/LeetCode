class Solution {
public:
    long long zeroFilledSubarray(vector<int>& v) {
        long long ans=0;
        int n=v.size();
        for(int i=0;i<n;)
        {
              long long cnt=0;
              while(i<n&&v[i]==0)cnt++,i++;
              ans+=cnt*(cnt+1)/2;
              if(cnt==0)i++;
        }
        return ans;
    }
};
