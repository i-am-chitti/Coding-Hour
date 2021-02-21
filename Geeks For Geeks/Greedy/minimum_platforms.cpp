// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
    multimap<int,char> mltmp;
    for(int i=0;i<n;i++) {
        mltmp.insert({arr[i],'a'});
    }
    for(int i=0;i<n;i++) {
        mltmp.insert({dep[i],'d'});
    }
    int count=0,minPlatforms=0;
    for(auto it=mltmp.begin();it!=mltmp.end();it++) {
        if(it->second=='a') count++;
        else count--;
        minPlatforms=max(count,minPlatforms);
    }
    return minPlatforms;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends