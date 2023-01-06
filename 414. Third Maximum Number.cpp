class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    int count = 0, i = nums.size()-1;
    stack<int> ret;
    ret.push(nums[i]);
    for (int j = i-1; j >= 0; j--) {
        if (ret.top() != nums[j]) {
            ret.push(nums[j]);
        }
        if (ret.size() == 3) {
            return ret.top();
        }
    }
    return nums[i];

    }
};