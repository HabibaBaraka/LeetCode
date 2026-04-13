class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int idx=INT_MAX,idx2=INT_MAX;
            for(int i=start;i<nums.size();i++)
        {
            if(nums[i]==target ){
                idx=i;
                break;
            }
        }
         for(int i=start;i>=0;i--)
        {
            if(nums[i]==target ){
                idx2=i;
                break;
            }
        }
        return min(abs(idx-start),abs(idx2-start));
    }
};
