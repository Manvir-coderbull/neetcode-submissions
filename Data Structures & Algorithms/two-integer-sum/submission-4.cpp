class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int> ans;
        vector<vector<int>> ele_index;
        for(int i=0;i<n;i++)
        {
            ele_index.push_back({nums[i],i});
        }
        sort(ele_index.begin(), ele_index.end(), [](const vector<int>&a, const vector<int>&b)
        { return a[0]<b[0]; });

        int left=0, right=n-1;
        while (left < right) 
        {
             /* Calculate sum of elements
             at left and right pointers*/
            int sum = ele_index[left][0] + ele_index[right][0];

            if (sum == target) 
            {
                int first=ele_index[left][1];
                int second=ele_index[right][1];
                ans.push_back(min(first,second));
                ans.push_back(max(first,second));
                return ans;
                
            } else if (sum < target) {
                
                /* If sum is less than target, 
                move left pointer to the right*/
                left++;
                
            } 
            else 
            {
                right--;
                
            }
        }
        return {};
    }
};
