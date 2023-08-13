class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        ios_base::sync_with_stdio(false),cin.tie(nullptr);
        int n = nums.size();
        int min_diff = INT_MAX;

        for (int i = 0; i < n - x; i++) {
            for(int j = i; j < n-x; j++)
            {
                int diff = abs(nums[i] - nums[j + x]);
                min_diff = min(min_diff, diff);
            }
        }

        return min_diff;
    }
};
