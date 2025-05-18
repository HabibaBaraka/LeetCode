
class Solution {
public:
    int maximumStrongPairXor(vector<int>& v) {
        map<int,int>mp;
        int mx=0,n=v.size();
        for( int i=0;i<n;i++){
            for(int j=i;j<n;j++){
if(abs(v[i]-v[j])<=min(v[i],v[j])){
    mx=max(mx,(v[i]^v[j]));
}
            }
        }
        return mx;
    }
};
