class Solution {
    bool pre(string s,string p){
        for(int i=0;i<p.size();i++){
            if(p[i]!=s[i])return 0;
        }
        return 1;
    }
     bool suff(string s,string p){
        reverse(s.begin(),s.end());
         reverse(p.begin(),p.end());
        for(int i=0;i<p.size();i++){
            if(p[i]!=s[i])return 0;
        }
        return 1;
    }
public:
    int countPrefixSuffixPairs(vector<string>& v) {
        int n=v.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            string ch=v[i];
            for(int j=i+1;j<n;j++){
               if(pre(v[j],ch)&&suff(v[j],ch))cnt++;
            }
        }
        return cnt;
    }
};
