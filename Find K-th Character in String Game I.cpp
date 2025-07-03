class Solution {
public:
string s = "a";
void pre()
{
	
	while (s.size() <= 500)
	{
		int n = s.size();
		for (int i=0;i<n;i++)
		{
			char c = s[i];
			c=='z'?s+='a':s += c + 1;
		}
	}
}

    char kthCharacter(int k) {
        pre();
        return s[k-1];
    }
};
