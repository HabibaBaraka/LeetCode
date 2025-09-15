class Solution {
public:
    int canBeTypedWords(string txt, string br) {
        bool freq[26]={};
        for(char c:br)freq[c-'a']=true;
        int bro=0;
        int cnt=0;
         int n=txt.size();
        for(int i=0;i<n;i++)
        {
            if(txt[i]==' ')
            {
             if(bro==0)cnt++;
             bro=0;
            }
            else if(freq[txt[i]-'a'])bro++;
        }
        if(bro==0)cnt++;
        return cnt;

    }
};
