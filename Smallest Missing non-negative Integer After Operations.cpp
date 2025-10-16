class Solution {
public:
    int findSmallestInteger(vector<int>& v, int val) {
        int n=v.size();
        set<int>s;
        map<int,int>mp;
        for(auto it:v)
        {   s.insert((it+(((abs(it))/val+1)*val))%val);
            mp[(it+((abs(it)/val+1)*val))%val]++;
        }
        int mex=0;
        for(auto it:s)
        {
            
            if(it!=mex)break;
            mex++;
            mp[it]--;
        }
        while(mex<n)
        {
            int x=(mex-val);
                if(mp[((x+(x/val+1)*val))%val])
                {
                    mp[(x+((x/val+1)*val))%val]--;
                    mex++;
                }
                else return mex;
        }
        return  mex;
    }
};
