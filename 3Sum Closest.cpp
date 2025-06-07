class Solution {
public:
    int threeSumClosest(vector<int>& v, int t) {
        int n=v.size();
        sort(v.begin(),v.end());
       int close=v[0]+v[1]+v[2];
        for(int i=0;i<n-2;i++){
        if(i>0&&v[i]==v[i-1])continue;
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            long sum=v[l]+v[r]+v[i];
            if(abs(t-sum)<abs(t-close))close=sum;
            if(sum<t)l++;
            else if(sum>t)r--;
            else return t;
        }
        }
      return close;
    }
};
