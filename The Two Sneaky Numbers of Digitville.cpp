class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int freq[101]={};
        vector<int>sneaky;
        for(auto it:nums)
        {
            if(freq[it]==1)sneaky.push_back(it);
            freq[it]++;
        }
        return sneaky;
    }
};
