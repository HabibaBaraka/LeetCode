class Solution {
    
    class trie{
trie* child[10];
bool isLeaf={};
public:
trie(){
// set arr to 0s , here set pointers to NULL
		memset(child, 0, sizeof(child));
}

void insert(string s){
    trie*cur=this;
    for(char c:s){
        int idx=c-'0';
if(!cur->child[idx])cur->child[idx]=new trie();
cur=cur->child[idx];
    }
    cur->isLeaf=1;
}
int lenPre(string s){
    trie*cur=this;
    int cnt=0;
    for(char c:s){
        int idx=c-'0';
if(!cur->child[idx]){break;}
 cnt++;
cur=cur->child[idx];
 
  }
   return cnt;  
}

    };
public:
    int longestCommonPrefix(vector<int>& v, vector<int>& v2) {
        trie tree;
        for(auto it:v){
          tree.insert(to_string(it));
        }
        int mx=0;
        for(auto it:v2){
           mx=max(mx,tree.lenPre(to_string(it)));
        }
return mx;

    }
};
