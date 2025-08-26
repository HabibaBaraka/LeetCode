class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int n=d.size();
        float di=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            int l=d[i][0],w=d[i][1];
            if(sqrt(l*l+w*w)>di)
            {
                di=sqrt(l*l+w*w);
                mx=l*w;
            }
            else if(sqrt(l*l+w*w)==di)
            {
                mx=max(l*w,mx);
            }
        }
        return mx;
    }
};
