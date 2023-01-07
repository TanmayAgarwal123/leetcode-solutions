class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
};

or

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
      int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(target==nums[mid]) 
                h=mid-1;
            else if(nums[mid]<target) 
                l=mid+1;
            else 
                h=mid-1;
        }
        return l;  
    }
};