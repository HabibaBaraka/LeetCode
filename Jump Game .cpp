class Solution {
public:
#define ll long long 
const ll mod=1e9+7;

    bool canJump(vector<int>& v) {
      int maxJumpCan=0;
      int n=v.size();
      for(int i=0;i<n&&i<=maxJumpCan;i++)
      {
        maxJumpCan=max(maxJumpCan,i+v[i]);
      }
      return maxJumpCan>=n-1;
      
    }
};
