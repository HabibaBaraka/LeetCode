class Solution {
    class trie{
trie* child[26];
bool isLeaf={};
public:
trie(){
// set arr to 0s , here set pointers to NULL
		memset(child, 0, sizeof(child));
}
int count(trie*node,int &idx){
    trie*cur=node;
    int cnt=0;
    for(int i=0;i<26;i++){
        if(cur->child[i]){
idx=i;cnt++;
     
        }

    }
    return cnt;
}
void insert(string s){
    trie*cur=this;
    for(char c:s){
        int idx=c-'a';
if(!cur->child[idx])cur->child[idx]=new trie();
cur=cur->child[idx];
    }
    cur->isLeaf=1;
}
string common(){
    trie*cur=this;
    string s="";
    int idx=-1;
    while(count(cur,idx)==1&&!cur->isLeaf){
       s+=idx+'a';
       cur=cur->child[idx];
    }
    return s;
}
    };
public:
    string longestCommonPrefix(vector<string>& v) {
        trie tree;
        for(auto it:v){
            tree.insert(it);
        }
        return tree.common();
    }
};
