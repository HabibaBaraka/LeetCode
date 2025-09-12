class Solution {
public:
bool vowel(char c)
{
    return c=='E'||c=='e'||c=='A'||c=='a'
    ||c=='O'||c=='o'||c=='U'||c=='u'||c=='I'||c=='i';
}
    bool doesAliceWin(string s) {
        int n=s.size();
        int vo=0;
        for(char c:s)
        {
            if(vowel(c))vo++;
        }
        bool a=0;
        while(true)
        {
            if(vo>=5&&vo-5!=2&&vo-5!=4)
            {
                vo-=5;
            }
            else if(vo>=3&&vo-3!=2&&vo-3!=4)
            {
                vo-=3;
            }
            else if(vo>0)vo--;
            else break;
            if(vo<2)
            {
                a=1;
                break;
            }
             if(vo>=4&&vo-4!=5&&vo-4!=3&&vo-4!=1)
            {
                vo-=4;
            }
            else if(vo>=2)
            {
                vo-=2;
            }
            if(vo==0)break;

        }
       return a;
    }
};
