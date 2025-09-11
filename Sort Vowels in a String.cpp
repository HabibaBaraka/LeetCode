class Solution {
public:
bool vowel(char c)
{
    return c=='E'||c=='e'||c=='A'||c=='a'
    ||c=='O'||c=='o'||c=='U'||c=='u'||c=='I'||c=='i';
}
    string sortVowels(string s) {
        queue<int>st;
         string t;
         string v;
          for(int i=0;i<s.size();i++)
          {
            char c=s[i];
            if(vowel(c))
            {
                st.push(i);
                v+=c;
            }
          }
          sort(v.rbegin(),v.rend());
          while(!st.empty())
          {
               s[st.front()]=v.back();
               v.pop_back();
               st.pop();
          }
          return s;
    }
};
