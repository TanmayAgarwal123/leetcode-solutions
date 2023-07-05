class Solution {
public:
    int mySqrt(int x) {
        long long int ans=0,i=0;
        for(i=0;i*i<=x;i++)
        {
            ans++;
        }
        return i-1;
    }
};

or

#include <iostream>
#include <bits/stdc++.h>

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int left = 1;
        int right = x;
        while (left <= right) {
            int m = left + (right - left) / 2;
            if (m > x / m) {
                right = m - 1;
            } else {
                if (m + 1 > x / (m + 1)) return m;
                left = m + 1;
            }
        }
        return -1;
    }
};