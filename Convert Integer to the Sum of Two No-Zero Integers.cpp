class Solution {
public:
bool zero(int x)
{
    while(x)
    {
        if(x%10==0)return 1;
        x/=10;
    }
    return 0;
}
    vector<int> getNoZeroIntegers(int n) {
        int a=1,b=0;
       while(zero(n-a)||zero(a))
       {
        a++;
      
       }
      
b=n-a;

            vector<int>v={a,b};
            return v; 
    }
};
