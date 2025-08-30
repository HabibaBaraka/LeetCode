class Solution {
public:
bool  valid(int i,int j,vector<vector<char>>& a)
{
     int freq[10]={};
    for(int x=i;x<i+3;x++)
    {
        for(int y=j;y<j+3;y++)
        {
              if((a[x][y])!='.')
              {
                if(freq[a[x][y]-'0'])return 0;
                else freq[a[x][y]-'0']++;
              }
        }
    }
    return 1;
}
    bool isValidSudoku(vector<vector<char>>& a) {
        int n=9,m=9;
        bool f=1;
        for(int i=0;i<n;i++)
        { 
                int freq[10]={};
            for(int j=0;j<m;j++)
            {
              if((a[i][j])!='.')
              {
                if(freq[a[i][j]-'0'])f=0;
                else freq[a[i][j]-'0']++;
              }
            }
        }
         for(int i=0;i<n;i++)
        { 
                int freq[10]={};
            for(int j=0;j<m;j++)
            {
              if((a[j][i])!='.')
              {
                if(freq[a[j][i]-'0'])f=0;
                else freq[a[j][i]-'0']++;
              }
            }
        }



        return f&&valid(0,3,a)&&valid(0,6,a)&&valid(0,0,a)&&valid(3,0,a)&&valid(3,3,a)
              &&valid(3,6,a)&&valid(6,0,a)&&valid(6,6,a)&&valid(6,3,a);
      
    }
};
