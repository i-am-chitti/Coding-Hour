// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> res;
        int i=0,j;
        for(j=1;j<n;j++) {
            if(A[j]<A[j-1] || (A[j]==A[j-1] && A[j]<=A[i])) {
                if(i!=j-1) {
                    vector<int> tempArr{i,j-1};
                    res.push_back(tempArr);
                }
                i=j;
            }
        }
        if(A[j-1]>A[j-2] && A[j-1]>A[i]) {
            if(i!=j-1) {
                vector<int> tempArr{i,j-1};
                res.push_back(tempArr);
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends