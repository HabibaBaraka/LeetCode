// dfs
class Solution {
public:
int co[200000];
bool vis[20000];
bool Dfs(int i,int c,vector<vector<int>>&g)
{
	co[i] = c;
	vis[i] = 1;
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			if (!Dfs(it, 1-c, g))return 0;
		}
		else if (co[it] == co[i])return 0;
	}
	return 1;
}
    bool isBipartite(vector<vector<int>>& g) {
        for(int i=0;i<g.size();i++)
        {
            if(!vis[i])
            {
                if(!Dfs(i,1,g))return 0;
            }
        }
        return 1;
    }
};
// bfs
class Solution {
public:
int co[200000];
bool vis[200000];
bool bfs(int i,int c,vector<vector<int>> &g)
{
	queue<int>q;
	q.push(i);
	co[i] = c;
	while (!q.empty())

	{
		int j = q.front();
		q.pop();

		for (auto it : g[j])
		{
			if (!vis[it])
			{
				co[it] = 1 - co[j];
				q.push(it);
                vis[it]=1;
			}
			else if (co[it] == co[j])return 0;
		}
	}
	return 1;
}
    bool isBipartite(vector<vector<int>>& g) {
        for(int i=0;i<g.size();i++)
        {
            if(!vis[i])
            {
                if(!bfs(i,1,g))return 0;
            }
        }
        return 1;
    }
};
