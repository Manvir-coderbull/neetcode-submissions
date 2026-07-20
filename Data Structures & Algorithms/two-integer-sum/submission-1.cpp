class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int remaining=target-num;
            if(mpp.find(remaining) != mpp.end())
            {
                return {mpp[remaining], i};
            }
            mpp[num]=i;
        }
        return {};
    }
};
