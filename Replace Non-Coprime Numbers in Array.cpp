class Solution {
public:
#define ll long long
    vector<int> replaceNonCoprimes(vector<int>& v) {
         vector<int>ans;
         int n=v.size();
        	stack<ll>st;
		for (int i = 0; i < n; i++)
		{
		  ll x=v[i];
      while(!st.empty()&&gcd(x,st.top())!=1)
      {
        x=x*st.top()/gcd(x,st.top());
        st.pop();
      }
      st.push(x);
		}
		while(!st.empty())
		{
		  ans.push_back(st.top());
		  st.pop();
		}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
