class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int mx=neededTime[i];
            int sum=neededTime[i];
            while(j<n&&colors[j]==colors[j-1])
            {
                mx=max(mx,neededTime[j]);
                sum+=neededTime[j];
                j++;
            }
            i=j-1;
            ans+=sum-mx;
            
        }
        return ans;
    }
};
