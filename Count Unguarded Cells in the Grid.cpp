class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
       vector<vector<bool>>vis(m,vector<bool>(n));
    

    char a[m+1][n+1];
     for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            a[i][j]='.';
        }
      }
    for(auto &it:guards)   a[it[0]][it[1]]='G';
      for(auto &it:walls)   a[it[0]][it[1]]='W';
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='G')
            {
                int k=j+1;
                while(k<n&&a[i][k]=='.')vis[i][k++]=1;
               k=j-1;
                while(k>=0&&a[i][k]=='.')vis[i][k--]=1;
                k=i+1;
                  while(k<m&&a[k][j]=='.')vis[k++][j]=1;
                  k=i-1;
                    while(k>=0&&a[k][j]=='.')vis[k--][j]=1;
            }
        }
      }
      int cnt=0;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='.'&&!vis[i][j])cnt++;
           
        }
      }
      return cnt;
    }
};
