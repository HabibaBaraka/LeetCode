class Solution {
public:

    int numSub(string s) {
        int n=s.size();
        long long ans=0;
        long long mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            long long cnt=0;
            while(i<n&&s[i]=='1')
            {
                cnt++;i++;
            }
          ans+=(cnt%mod*(cnt+1)%mod)/2;
          ans%=mod;
        }
        return ans;
    }
};
