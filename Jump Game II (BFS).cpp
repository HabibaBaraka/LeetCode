class Solution {
public:
vector<int>a;
bool vis[20000];
int n;
int  bfs(int i = 0)
{
	queue<pair<int,int>>q;
	q.push({ i,0 });
    vis[i]=1;
	while (!q.empty())
	{
		pair <int,int> s = q.front();
		q.pop();
		if (s.first == n - 1)
		{
			return s.second;
			
		}
		for (int j = 1; j <= a[s.first]; j++)
		{
			if (s.first + j < n&&!vis[s.first + j]){q.push({ s.first + j ,s.second + 1 });vis[s.first + j]=1;}
		}
	}
return 0;
}
    int jump(vector<int>& nums) {
        a=nums;
        n=a.size();
        return bfs();
    }
};
