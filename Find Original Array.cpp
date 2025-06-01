class Solution {
public:
    vector<int> findOriginalArray(vector<int>& ch) {
        vector<int>v;
        int n=ch.size();
        if(n&1)return v;
        unordered_map<int,int>s;
        sort(ch.begin(),ch.end());
        for(auto it:ch)
        {
           s[it]++;
        }
       

          for(auto it:ch)
       {

              if(v.size()==n/2)return v;

              if(s[(it*2)]>0&&s[(it)]>0)
              {
                if(it==0&&s[(0)]<2)continue;
                s[it]--;
                s[2*it]--;
                v.push_back(it);
              }

       }
      

  v.clear();
  return v;
  
  
    }
};
