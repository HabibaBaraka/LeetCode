class Solution {
public:
    int lengthAfterTransformations(string s, int tt) {
        long long mod=1e9+7;
        long long  n = s.size();
vector<long long>mp(28, 0);

for (int i = 0; i < n; i++) {
	int rec = 'z' - s[i] + 1;
	mp[rec]++;
}
while (tt > 0) {
	long long op = 0;
	for (int i = 0; i < 28; i++) {
		if (mp[i] != 0) {
			op = i;
			break;
		}
	}
	if (tt < op)break;
	else {
		tt -= op;
		n +=( mp[op]%mod);
		n%=mod;
		vector<long long>mp2(28, 0);
		mp2[26] += mp[op];
		mp2[25] += mp[op];
		mp[op] = 0;
		for (int i = op+1; i < 28; i++) {
			if (mp[i] != 0) {
				long long nrec = i - op;
				mp2[nrec] += mp[i]%mod;
                mp2[nrec]%=mod;
				mp[i] = 0;
			}
		}
		mp = mp2;
	}

}
return n%(mod);
    }
};
