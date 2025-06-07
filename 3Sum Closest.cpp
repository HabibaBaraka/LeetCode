class Solution {
public:
    int threeSumClosest(vector<int>& v, int t) {
        int n=v.size();
        sort(v.begin(),v.end());
        int mn=INT_MAX;
        bool f=1;
        for(int i=0;i<n-2;i++){
        if(i>0&&v[i]==v[i-1])continue;
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int sum=v[i]+v[l]+v[r];
            if(abs(t-sum)<=mn){if(t-sum<0)f=0;else f=1;mn=abs(t-sum);}
           
          if(t-sum>sum-t)l++;
            else r--;
        }
        }
       if(f)return t-mn;else return t+mn;
    }
};
