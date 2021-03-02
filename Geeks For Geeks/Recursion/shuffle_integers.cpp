// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
	void printArr(int *arr, int n) {
	    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	    cout<<endl;
	}
	void solve(int *arr, int start, int end, int n) {
	       if(start<end && end-start>2) {
	           int mid=start+(end-start)/2;
	           int i = start+(mid-start)/2,j=mid;
	           while(i<mid) {
	               swap(arr[i],arr[j]);
	               i++;
	               j++;
	           }
	           //printArr(arr,n);
	           if(mid&1) {
	               solve(arr,start,mid-1,n);
	               solve(arr,mid+1,end,n);
	               swap(arr[mid-1],arr[mid]);
	           }
	           else {
	               solve(arr,start,mid,n);
    	           solve(arr,mid,end,n);
	           }
	       }
	}
	
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    solve(arr,0,n, n);
	}
		 

};

// { Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends