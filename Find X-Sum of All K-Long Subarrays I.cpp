class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>ans(n-k+1);
        for(int i=0;i<(n-k+1);i++)
        {
            int cnt=0;
            int mx=0;
            int fr[51]={};
           
           priority_queue<pair<int,int>>pq;
          for(int j=i;j<i+k;j++)
          {
              fr[nums[j]]++;
          }
          for(int j=1;j<=50;j++)
          {
               pq.push({fr[j],j});
          }
          while(!pq.empty()&&cnt<x)
          {
            ans[i]+=(pq.top().first)*(pq.top().second);
            pq.pop();
            cnt++;
          }
           
        }
        return ans;
    }
};
