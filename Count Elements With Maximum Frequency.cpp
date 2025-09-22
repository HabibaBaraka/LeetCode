class Solution {
public:
    int maxFrequencyElements(vector<int>& v) {
        int n =v.size();
        int fr[101]={};
        int mx=0;
        for(int i=0;i<n;i++)
        {
            fr[v[i]]++;
            mx=max(mx,fr[v[i]]);
        }int cnt=0;
        for(int i=1;i<=100;i++)
        {
           if(fr[i]==mx)cnt++;
        }
        return cnt*mx;
    }
};
