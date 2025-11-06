class Solution {
public:
 #define G  vector<vector<int>> 
bool vis[100007];
int mp[100007];
vector<set<int>>stat;
void dfs(int i,set<int>&s,G&g)
{
    vis[i]=1;
    mp[i]=stat.size();
    s.insert(i);
    for(auto it:g[i])
    {
        if(!vis[it])dfs(it,s,g);
    }
}
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        G g(c+1);
        vector<int>a;
        for(auto it:connections)
        {
            g[it[0]].push_back(it[1]);
             g[it[1]].push_back(it[0]);
        }
        for(int i=1;i<=c;i++)
        {    set<int>s;
            if(!vis[i])
            {
                dfs(i,s,g);
                stat.push_back(s);
            }
        }
        for(auto it:queries)
        {
            set<int>*conc= &stat[mp[it[1]]];
            if(it[0]==2)
            {
                if(! conc->empty())conc->erase(it[1]);
            }
            else 
            {
               
                if(conc->count(it[1]))a.push_back(it[1]); 
                else if(!conc->empty())a.push_back(*conc->begin());
                else  a.push_back(-1);
            }
        }
        return a;
    }
};
