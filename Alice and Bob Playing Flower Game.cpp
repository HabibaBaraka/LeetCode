class Solution {
public:
# define ll long long 
    long long flowerGame(int n, int m) {
        long long  ans=0;
        ans+=(n/2)*1ll*(m-(m/2));
        ans+=(n-(n/2))*1ll*(m/2);
        return ans;
    }
};
