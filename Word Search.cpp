class Solution {
public:
 int dx[4] = { 0,0,-1,1 };
 int dy[4] = { 1,-1,0,0 };
int n,m;
vector<vector<char>>a2;
bool vis[100][100];
string word;
bool valid(int x,int y)
{
	return x >= 0 && x < n && y>=0 && y < m;
}
bool dfs(int i, int j,int idx)
{
	// base case
	if (a2[i][j] != word[idx])return 0;
	
	if (idx == word.size()-1)return 1;
	vis[i][j] = 1;
	// transition
	for (int o = 0; o < 4; o++)
	{
		int nx = i + dx[o], ny = j + dy[o];
		if (valid(nx, ny) &&!vis[nx][ny])
		{

			if (dfs(nx, ny, idx + 1))return 1;
		}
	}
	vis[i][j] = 0;//backtrack
	return 0;
}


    bool exist(vector<vector<char>>& a, string w) {
             n=a.size();
             m=a[0].size();
             a2=a;
             word=w;
             bool f = 0;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{
        if(a[i][j]==w[0])
        {
		memset(vis, 0, sizeof(vis)); if (dfs(i, j,0)) { f = 1; break; }
        }
	}
}
return f;
    }
};
