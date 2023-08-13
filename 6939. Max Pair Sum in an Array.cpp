class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<char, vector<int>> max_digit_pairs;

        for (int num : nums) {
            string str_num = to_string(num);
            char max_digit = *max_element(str_num.begin(), str_num.end());
            max_digit_pairs[max_digit].push_back(num);
        }

        int max_sum = -1;

        for (const auto& pair : max_digit_pairs) {
            const vector<int>& num_list = pair.second;
            if (num_list.size() > 1) {
                vector<int> sorted_list = num_list;
                sort(sorted_list.rbegin(), sorted_list.rend());
                max_sum = max(max_sum, sorted_list[0] + sorted_list[1]);
            }
        }

        return max_sum;
    }
};
