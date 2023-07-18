int Solution::maxArr(vector<int> &A) {
    int mx1=INT_MIN;
    int mx2=INT_MIN;
    int mn1=INT_MAX;
    int mn2=INT_MAX;
    int n=A.size();
    int temp1,temp2;
    for(int i=0;i<n;i++)
    {
        temp1=A[i]+i+1;
        temp2=A[i]-i-1;
        mx1=max(temp1,mx1);
        mn1=min(temp1,mn1);
        mx2=max(temp2,mx2);
        mn2=min(temp2,mn2);
    }
    return max(mx1-mn1,mx2-mn2);
}
