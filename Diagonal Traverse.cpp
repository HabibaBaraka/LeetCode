class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& v) {
 int n= v.size(),m=v[0].size();
        vector<int>a;
        for(int j=0;j<m;j++)
        {
            int i=0;
            int c=j;
          vector<int>di;
          
       
         do
         {
            di.push_back(v[i][j]);
            i++;
            j--;
         }  while(i<n&&j>=0);
         j=c;
         if(j%2==0)reverse(di.begin(),di.end());
          for(auto it:di)a.push_back(it);
        
        }
        bool f=(m%2==0);
        for(int i=1;i<n;i++)
        {
            int j=m-1;
            int c=i;
            vector<int>di;
          do
         {
            di.push_back(v[i][j]);
            i++;
            j--;
         }  while(i<n&&j>=0);
         i=c;
         if(f)
         {
            reverse(di.begin(),di.end());
            f=0;
         }else f=1;
        for(auto it:di)a.push_back(it);
        
        
        }
        return a;
    }
};
