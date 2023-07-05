class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int f=0,l=n-1;
        while(f<l)
        {
            if(numbers[f]+numbers[l] > target)
                l--;
            else if(numbers[f]+numbers[l] < target)
                f++;
            else
            {
                ans.push_back(f+1);
                ans.push_back(l+1);
                break;
            }
            
        }
        return ans;
    }
};