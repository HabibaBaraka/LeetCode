class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
         vector<string>DNA;
   
        for(int i=0;i<s.size();i++)
        {
               string st=s.substr(i,10);
               mp[st]++;
               if(mp[st]==2)DNA.push_back(st);
        }



      return DNA; }
   
 
};
