// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long mod = 1000000007;
    long long int numberOfPaths(int m, int n){
        // code here
        static vector<vector<int>> arr(m+1,vector<int>(n+1,-1));
        if(m==1 && n==1) return 1;
        if(m<=0 || n<=0) return 0;
        if(arr[m][n]!=-1) return arr[m][n];
        arr[m][n] = ((numberOfPaths(m-1,n)%mod)+(numberOfPaths(m,n-1)%mod))%mod;
        return arr[m][n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends