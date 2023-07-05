class Solution {
public:
    int firstBadVersion(int n) {
        long long beg=1, end=n, mid=(beg+end)/2;
        while(beg <= end)
        {
            mid=(beg+end)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1))
                return mid;
            else if(isBadVersion(mid))
                end = mid - 1;
            else
                beg = mid + 1;
        }
        return -1;
    }
};