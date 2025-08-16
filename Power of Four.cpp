class Solution {
public:
    bool isPowerOfFour(long long n) {
      if(n<=0)return 0;
       
       while(n!=1)
       {
        if(n%4!=0)return 0;
        n/=4;

       }
       return true;
    }
};
