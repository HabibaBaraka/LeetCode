class Solution {
public:
    bool isZeroArray(vector<int>& v, vector<vector<int>>& q) {
        int n=v.size();
        vector<int>par(n+1);
        for (auto it : q) {
	par[it[0]]--;
	par[it[1]+1]++;
}
for (int i = 1; i < n; i++) {
	par[i] += par[i - 1];
}
   for(int i=0;i<n;i++){
    v[i]=max(v[i]+par[i],0);
   }
   sort(v.begin(),v.end());

   return (v[0]==0&&v[n-1]==0) ;}
};
