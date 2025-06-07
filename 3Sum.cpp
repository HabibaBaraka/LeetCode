class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>ans;
        sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++)
        {     
            if(i>0&&v[i]==v[i-1])continue;
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(v[i]+v[l]+v[r]==0){
                    
                    
                    ans.push_back({v[i],v[l],v[r]});
                    while(l<r&&v[l]==v[l+1])l++;
                    while(l<r&&v[r]==v[r-1])r--;
                    l++;
                    r--;

                }
                else if(v[i]+v[l]+v[r]>0)
                {
                    r--;
                }
                else l++;
            }

        }

     
        return ans;
    }
};
