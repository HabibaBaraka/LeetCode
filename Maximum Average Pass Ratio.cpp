class Solution {
public:
double diff(int p,int t)
{
    return ((1.0*(p+1)/(t+1))-(1.0*p/t));
}
    double maxAverageRatio(vector<vector<int>>& v, int ex) {
        double ans=0;
       
        priority_queue<pair<double,pair<int,int>>>pq;
        for(auto it:v)
        {
            int p=it[0],t=it[1];
           pq.push({diff(p,t),{p,t}});
       
        }
        while(ex--)
        {
          int p=pq.top().second.first,t=pq.top().second.second;
          p++;t++;
          pq.pop();
          pq.push({diff(p,t),{p,t}});
        }
      while(!pq.empty())
      {
       int p=pq.top().second.first,t=pq.top().second.second;
       ans+=(1.0*p/t);
        pq.pop();
      }
        
        return ans/=v.size();
    }
};
