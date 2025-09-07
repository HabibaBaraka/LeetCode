class Solution {
public:
    vector<int> sumZero(int n) {
        int x=1;
         vector<int>v;
        for(int i=0;i<n/2;i++)
        {
          v.push_back(x);
          v.push_back(-x);
          x++;
        }
        if(n&1)
        {
            v.push_back(0);
        }
        return v;
    }
};
