class Solution {
public:
    int compareVersion(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0,i=0;
        int x=0,y=0;

        while(i<n||j<m)
        {
            while(i<n&&s[i]=='0')i++;
            string num="";
          while(i<n&&s[i]!='.')
          {
           num+=s[i];
           i++;
          }
          if(num.empty())x=0;
         else  x=stoi(num);
          
           while(j<m&&t[j]=='0')j++;
             num="";
          while(j<m&&t[j]!='.')
          {
           num+=t[j];
           j++;
          }
          if(num.empty())y=0;
         else  y=stoi(num);
          if(x<y)return -1;
          if(x>y)return 1;
          
          x=0,y=0;
          i++;j++;
        }
        return 0;
    }
};
