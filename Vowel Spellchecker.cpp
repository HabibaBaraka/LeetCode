class Solution {
public:
 bool vowel(char c)
{
    return c=='E'||c=='e'||c=='A'||c=='a'
    ||c=='O'||c=='o'||c=='U'||c=='u'||c=='I'||c=='i';
}
string ser1(vector<string>& w,string&s)
{
    int n=w.size();
                for(int j=0;j<n;j++)
            {
                 if(s.size()!=w[j].size())continue;
                 bool f=1;
                 
                for(int k=0;k<s.size();k++)
                {
                    if(s[k]!=w[j][k])
                    {
                    if(vowel(s[k])&&vowel(w[j][k])&&w[j][k]!=s[k]);
                    else if(abs(s[k]-w[j][k])==32);
                    else f=0;
                    }
                }
                if(f)
                {
                    return w[j];
                }
            }
            return "";
}
string ser2(vector<string>& w,string&s)
{
    int n=w.size();
                for(int j=0;j<n;j++)
            {
                 if(s.size()!=w[j].size())continue;
                 bool f=1;
                 
                for(int k=0;k<s.size();k++)
                {
                    if(s[k]!=w[j][k])
                    {
                    if(abs(s[k]-w[j][k])==32);
                    else f=0;
                    }
                }
                if(f)
                {
                    return w[j];
                }
            }
            return "";
}

    vector<string> spellchecker(vector<string>& w, vector<string>& q) {
        int n=w.size();
        int m=q.size();
        vector<string>mat;
        map<string,bool>mp;
      
        for(int i=0;i<n;i++){mp[w[i]]=1;
       
        }

        for(int i=0;i<m;i++)
        {
            string s=q[i];
            if(mp[s]){mat.push_back(s);continue;}
           string l=ser2(w,s),r=ser1(w,s);
            if(l!="")mat.push_back(l);
            else mat.push_back(r);

        }
        return mat;
    }
};
