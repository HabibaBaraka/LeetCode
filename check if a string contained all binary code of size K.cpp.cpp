class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string ,int>mp;
        int sz=s.size();
        for(int i=0;i<sz;i++){
            string g=s.substr(i,min(sz,k));
            //sort(g.begin(),g.end());
            if(g.size()==k){
            mp[g]++;
            if(mp.size()==pow(2,k))return 1;
            }
        }
        return 0;
    }
};
