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
void DFS(trie*cur,string s,vector<string>&v){
    // base case 
    if (cur->isLeaf)v.push_back(s);
    // transition what i do 
    for(int i=0;i<10;i++){
        if(cur->child[i]){
            DFS(cur->child[i],s+char(i+'0'),v);
        }
    }
}
vector<int> Dfs(){
    vector<string>v;
    DFS(this,"",v);
     vector<int> ans;
for(auto it:v){
ans.push_back(stoi(it));}
return ans;
}

};
public:
    vector<int> lexicalOrder(int n) {
        trie tree;
        for(int i=1;i<=n;i++){
            tree.insert(to_string(i));
        }
return tree.Dfs();
    }
};
