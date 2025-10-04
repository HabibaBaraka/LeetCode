class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int l=0,r=n-1;
       
      
        int mx=0;
       while(l<r)
        {
         
         mx=max(((r-l)*min(v[l],v[r])),mx);
          if(v[l]<v[r])
          {
            l++;
          }
          else r--;
        }
        return mx;
    }
};
