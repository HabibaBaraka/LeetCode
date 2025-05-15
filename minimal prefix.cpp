class Solution {
    class Trie {
private:
	static const int MAXChar = 26;
	Trie* child[MAXChar];
	bool isLeaf{};//the word is complete
public:
	Trie() {
		// set arr to 0s , here set pointers to NULL
		memset(child, 0, sizeof(child));
	}
void insert(string s) {
	Trie* curr = this;//root
	for (char c : s) {
		int cur = c - 'a';
		if (!(curr->child[cur]))curr->child[cur] = new Trie();
		curr=curr-> child[cur];
	}
	curr->isLeaf = 1;
}
string shortExist(string s) {
	string ans = "";
	Trie* cur = this;//root
	for (char c : s) {
		int idx = c - 'a';
		if (!cur->child[idx])return s;// char is missed in this path
		cur = cur->child[idx];
		ans += c;
		if (cur->isLeaf) {
			return ans;
		}
		
	}
	// we reach to the end of path and no isLeaf
	return s;
}
    };
public:
    string replaceWords(vector<string>& dic, string s) {
        Trie trie;
for(auto it:dic){
trie.insert(it);
}

        int n=s.size();
        vector<string>ss;
        for(int i=0;i<n;i++){
            string j="";
            while(i<n&&s[i]!=' '){
                j+=s[i];
                i++;
            }
         ss.push_back(j);
        }

        string ans;
for(int i=0;i<ss.size();i++){
ans+=trie.shortExist(ss[i]);
if(i!=ss.size()-1)ans+=" ";
}
 return ans;   }
};
