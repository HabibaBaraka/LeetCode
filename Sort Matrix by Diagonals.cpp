class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& v) {
          vector<vector<int>>ans;
          int n=v.size();
        // bottom-left triangle
        for(int i=0;i<n;i++)
        {
          int j=0, ni=i;
          vector<int>a;
          while(j<n&&i<n)
          {
            a.push_back(v[i][j]);
            i++;
            j++;
          }
          sort(a.begin(),a.end());
          i=ni,j=0;
          while(j<n&&i<n)
          {
            v[i][j]=a.back();
            a.pop_back();
            i++;
            j++;
          }
          i=ni;
        }
        // top-right triangle 
          for(int j=1;j<n;j++)
        {
          int i=0, nj=j;
          vector<int>a;
          while(j<n&&i<n)
          {
            a.push_back(v[i][j]);
            i++;
            j++;
          }
          sort(a.rbegin(),a.rend());
          j=nj,i=0;
          while(j<n&&i<n)
          {
            v[i][j]=a.back();
            a.pop_back();
            i++;
            j++;
          }
          j=nj;
        }
        return v;
    }
};
