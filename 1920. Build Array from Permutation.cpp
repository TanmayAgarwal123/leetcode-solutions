class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        //ios_base::sync_with_stdio(false),cin.tie(NULL);
        int n = nums.size();
        vector<int> next(n);
        for (int i = 0; i < n; i++) {
            next[i] = nums[nums[i]];
        }
        return next;
    }
};
