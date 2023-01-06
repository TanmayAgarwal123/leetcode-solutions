class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int previous_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int current_sum = previous_sum+nums[i];
            ans=max(ans,current_sum);
            previous_sum=max(0,current_sum);
        }
        return ans;
    }
};