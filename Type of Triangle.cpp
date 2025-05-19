class Solution {
public:
    string triangleType(vector<int>& v) {
        vector<string>s={"equilateral","scalene","isosceles","none"};
        sort(v.begin(),v.end());
        if(v[0]==v[2]){
            return s[0];
        }
        else if((v[0]==v[1]||v[1]==v[2])&&v[0]+v[1]>v[2])return s[2];
        else if(v[0]+v[1]<=v[2])return s[3];
        else return s[1];
    }
};
