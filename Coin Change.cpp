class Solution {
public:
long long mn = INT_MAX;
unordered_map<long long ,bool>vis;
void Bfs(vector<int>& v,int k)
{
	queue<pair<long long, long long>>q;
	q.push({ 0,0 });
		while (!q.empty())
		{
			pair<long long, long long>p = q.front();
			q.pop();
			if (p.first == k)
			{
				mn = min(mn, p.second);
			}
			else if (p.first > k)continue;
			else
			{
				for (auto it : v)
				{
                    if(!vis[it+p.first]){
					q.push({ p.first + it,p.second + 1 });vis[it+p.first]=1;
                    }
				}
			}

		}
}

    int coinChange(vector<int>& coins, int amount) {
        Bfs(coins,amount);
        if(mn==INT_MAX)return -1;else return mn;
    }
};
