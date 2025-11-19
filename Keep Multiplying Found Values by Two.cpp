class Solution {
public:
    int findFinalValue(vector<int>& v, int x) {
       while(true)
       {
        bool f=0;
        for(auto it:v)
        {
            if(it==x)
            {
                f=1;
                x*=2;
                break;
            }
        }
        if(!f)return x;
       }
      
    }
};
