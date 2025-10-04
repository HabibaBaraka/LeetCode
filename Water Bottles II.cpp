class Solution {
public:
    int maxBottlesDrunk(int cnt, int ex) {
        int ans=0;
        while(cnt)
        {
            if(cnt>=ex)
            {
                ans+=ex;
                cnt-=(ex-1);
                ex++;
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
