class Solution {
public:
    vector<int> avoidFlood(vector<int>& v) {
        // priority on (occ,lakeId);
        // if 0 dry top of pq
        // else push(mp,lakeId)
        map<long long ,set<int>>mp;
        map<int,int>mp2;
          int n=v.size();
          vector<int>ans(n,1),b;
          for(int i=0;i<n;i++)
          {
            mp[v[i]].insert(i);
          }
       priority_queue<pair<int,long long>, vector<pair<int,long long>>,greater<pair<int,long long>>>pq;
      for(int i=0;i<n;i++)
      {
        if(v[i]!=0)
        {
            auto it=mp[v[i]].begin();
            mp[v[i]].erase(it);
            it=mp[v[i]].begin();
            if(it!=mp[v[i]].end())pq.push({*it,v[i]});
            else pq.push({n,v[i]});
            ans[i]=-1;
            mp2[v[i]]++;
            if(mp2[v[i]]>1)return b;
          // cout<<mp2[v[i]]<<' '<<v[i]<<'\n';
        }
        else 
        {
               if(!pq.empty())
               {
                 ans[i]=pq.top().second;
                 mp2[pq.top().second]--;
                pq.pop();
               }
        }
      }
      return ans;
    }
};
