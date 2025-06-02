class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto it:strs)
        {

            string srtS=it;
            sort(srtS.begin(),srtS.end());
            
            mp[srtS].push_back(it);
        }
     vector<vector<string>>s;   
for(auto it:mp)
    {
s.push_back(it.second);

    }
return s;
    }
};
