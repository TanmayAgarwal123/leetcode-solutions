class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n =nums.size();
        int mx[3]={-1001,-1001,-1001};
        int mn[2]={1001,1001};
        int fir,sec;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=mx[0])
            {
                fir=mx[0];
                sec=mx[1];
                mx[0]=nums[i];
                mx[1]=fir;
                mx[2]=sec;
            }
            else if(nums[i]>=mx[1])
            {
                fir=mx[1];
                mx[1]=nums[i];
                mx[2]=fir;
            }
            else if(nums[i]>mx[2])
            {
                mx[2]=nums[i];
            }
            if(nums[i]<=mn[0])
            {
                fir=mn[0];
                mn[0]=nums[i];
                mn[1]=fir;
            }
            else if(nums[i]<mn[1])
            {
                mn[1]=nums[i];
            }
        }
        return max(mn[0]*mn[1]*mx[0],mx[0]*mx[1]*mx[2]);
    }
};