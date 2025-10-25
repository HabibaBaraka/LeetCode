class Solution {
public:
long long clc(long long a)
{
    return (a*(a+1))/2;
}

    int totalMoney(int n) {
        int x=1;
        long long ans=0;
        while(n>0)
        {
           int rec=min(6,n-1);
           n-=rec+1;
           ans+=clc(x+rec)-clc(x-1);
           x++;
        }
        return ans;
    }
};
