// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    priority_queue<ull> pq;
	    pq.push(1);
	    unordered_set<int> st;
	    for(int i=0;i<n;i++) {
	        ull temp=pq.top();
            cout<<i<<" "<<temp<<"\n";
	        pq.pop();
	        vector<ull> arr{temp*2,temp*3,temp*5};
            
	        
	    }
	    return pq.top();
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends