class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> name;
        for(int i=0;i<nums.size();i++)
        {
            if(name.count(target-nums[i]))
            {
                return {name[target-nums[i]],i};
            }
            name[nums[i]] = i;
        }
        return {-1,-1};
    }
};