class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a.push_back(j);
                    a.push_back(i);
                    return a;
                }
            }
        }
        return a;
    }
};