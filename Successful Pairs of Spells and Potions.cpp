class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        sort(p.begin(),p.end());
        vector<int>v;
        for(auto it:s)
        {
            long long  val=ceil(1.0*success/it);
            int i=p.size()-(lower_bound(p.begin(),p.end(),val)-p.begin());
            v.push_back(i);
        }
        return v;
    }
};
