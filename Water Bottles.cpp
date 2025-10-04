class Solution {
public:
    int numWaterBottles(int cnt, int ex) {
        int ans=0;
        while(cnt)
        {
            if(cnt>=ex)
            {
                ans+=ex;
                cnt-=(ex-1);
            }
            else 
            {
                ans+=cnt;
                cnt=0;
            }
        }
        return ans;
    }
};
