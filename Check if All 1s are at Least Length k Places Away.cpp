class Solution {
public:
    bool kLengthApart(vector<int>& v, int k) {
        int cnt=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
           if(v[i]==1)
           {
           
            int j=i+1;
            while(j<n&&v[j]!=1)j++;
            if(j<n)
            {
                if(j-i-1<k)return 0;
            }
            i=j-1;
           }
        }
        return true;
    }
};
