class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& ward, vector<int>& v) {
        int n=v.size();
      vector<string>ans;
      ans.push_back(ward[0]);
for(int i=0;i<n;i++){
    int j=i+1;
  while(j<n&&v[j]==v[i]){
    j++;
  }
if(j<n){
    ans.push_back(ward[j]);
    i=j-1;
}
else break;
}
  
  
  return ans; }
};
