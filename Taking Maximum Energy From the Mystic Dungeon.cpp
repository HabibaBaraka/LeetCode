class Solution {
public:

    int maximumEnergy(vector<int>& v, int k) {
       
        int n=v.size();
        vector<int>p(n);
        for(int i=n-1;i>=n-k;i--)
        {
            p[i]=v[i];
        }
        for(int i=n-k-1;i>=0;i--)
        {
         p[i]+=p[i+k]+v[i];
        }
        return *max_element(p.begin(),p.end());
      
        
    }
};
