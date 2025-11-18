class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        for(int i=0;i<n;i++)
        {
            if(bits[i]==1&&i<n-1){if(i==n-2)return 0;i++;}
        }
        return 1;
    }
};
