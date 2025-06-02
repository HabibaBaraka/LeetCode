class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        
       vector<vector<int>>v;

             sort(a.begin(),a.end());
        
          int i=0;
          while(i<a.size())
          {
          v.push_back({a[i][0],a[i][1]});
          i++;
          while(i<a.size()&&a[i][0]<=v.back()[1])
           {
            v.back()[1]=max( v.back()[1],a[i][1]);
            i++;
           }
          }
        
        return v;
    }
};
