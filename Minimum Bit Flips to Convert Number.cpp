class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<64>a=start,b=goal;
        int flip=0;
        for(int i=0;i<64;i++)
        {
           if(a[i]!=b[i])flip++;
        }
        return flip;
    }
};
