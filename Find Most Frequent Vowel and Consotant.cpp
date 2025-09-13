class Solution {
public:
    bool vowel(char c)
{
    return c=='E'||c=='e'||c=='A'||c=='a'
    ||c=='O'||c=='o'||c=='U'||c=='u'||c=='I'||c=='i';
}
    int maxFreqSum(string s) {
        int freq[27]={};
        int mx_c=0,mx_v=0;
        for(char c:s)
        {
            if(vowel(c))
            {
               freq[c-'a']++;
               mx_v=max(mx_v,freq[c-'a']);
            }
            else 
            {
                freq[c-'a']++;
                mx_c=max(mx_c,freq[c-'a']);
            }
        }
        return mx_c+mx_v;
    }
};
