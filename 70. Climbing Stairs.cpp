class Solution {
public:
    int climbStairs(int n) {
        map<int,int>lookup;
        lookup[1]=1;
        lookup[2]=2;
        return dpclimbStairs(n,lookup);
    }
     int dpclimbStairs(int n,map<int,int>&lookup) {
       if(lookup.find(n)!=lookup.end())return lookup[n];
        lookup[n]= dpclimbStairs(n-1,lookup)+dpclimbStairs(n-2,lookup);
        return lookup[n];
    }
};