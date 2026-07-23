class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int longest=0;
        for(int num:numSet)
        {
            if(numSet.find(num-1)==numSet.end())
            {
                int length=1;
                while(numSet.find(num+length) != numSet.end())
                {
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    
        
    }
};
//for finding longest consecutive sequence i 
//need a data structure which stores unique elements in ordered way
