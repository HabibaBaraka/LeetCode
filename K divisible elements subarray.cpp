class Solution {
public:
    int countDistinct(vector<int>& n, int k, int p) {
        set<vector<int>>s;
for(int i=0;i<n.size();i++){
    vector<int>v;
    int cnt=0;
    for(int j=i;j<n.size();j++)
    {
        if(n[j]%p==0)cnt++;
        v.push_back(n[j]);
        if(cnt<=k)s.insert(v);
    }
}

return s.size();
    }
};
