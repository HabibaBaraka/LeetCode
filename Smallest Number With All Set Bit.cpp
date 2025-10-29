class Solution {
public:
    int smallestNumber(int n) {
        int msb=log2(n)+1;
        return (1<<msb)-1;
    }
};
