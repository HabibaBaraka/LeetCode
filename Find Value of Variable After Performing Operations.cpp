class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int x=0;
        for(auto it:op)
        {
            if(it=="X++"||it=="++X")x++;
            else x--;
        }
        return x;
    }
};
