//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int row=-1;
	    int pos=m-1;
	    for(int i=0;i<m;i++)
	    {
	        if(arr[0][i])
	        {
	            pos=i-1;
	            row=0;
	            break;
	        }
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=pos;j>-1;j--)
	        {
	            if(arr[i][j])
	            {
	                row=i;
	                pos=j-1;
	            }
	            else
	                break;
	        }
	    }
	    return row;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends