// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    string findMissing(int arr[], int n) {
        // code here
        map<int, int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        string res="";
        int now,last=0;
        for(auto it=mp.begin();it!=mp.end();it++) {
            now=it->first-1;
            if(now>last) {
                res+=to_string(last)+"-"+to_string(now)+" ";
                last=now+1;
            }
            else if(now==last) {
                if(mp[now]==0)
                    res+=to_string(now)+" ";
                last=now+1;
            }
            last++;
        }
        if(res.length()==0) return "-1";
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends