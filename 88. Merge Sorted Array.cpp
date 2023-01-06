class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m+n;
        for(int i=0;i<m;i++)
            nums1[i]=nums1[i];
        for(int i=m;i<x;i++) 
            nums1[i]=nums2[i-m];
        sort(nums1.begin(),nums1.end());  
    }
};