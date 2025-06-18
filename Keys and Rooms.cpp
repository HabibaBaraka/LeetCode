// Dfs
class Solution {
public:

bool vis[100000];
void  Dfs(int i,vector<vector<int>> &g)
{
    vis[i]=1;
	
		for(auto it:g[i])
        {
            if(!vis[it])
            {
                Dfs(it,g);
            }
        }
		
}

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int cnt=0;
       for(int i=0;i<rooms.size();i++)
       {
        if(!vis[i])
        {
            cnt++;
            Dfs(i,rooms);
        }
       }
       return cnt==1;
    }
};
// Bfs
class Solution {
public:

bool vis[100000];
void  Bfs(int st,vector<vector<int>> &g)
{
	queue<int>q;
	q.push(st);
	vis[st] = 1;
		while (!q.empty())
		{
			int n = q.front();q.pop();
			
			for (auto it : g[n])
			{
				if (!vis[it])
				{
					q.push(it);
					vis[it] = 1;
				}
			}
		}
		
}

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int cnt=0;
       for(int i=0;i<rooms.size();i++)
       {
        if(!vis[i])
        {
            cnt++;
            Bfs(i,rooms);
        }
       }
       return cnt==1;
    }
};
