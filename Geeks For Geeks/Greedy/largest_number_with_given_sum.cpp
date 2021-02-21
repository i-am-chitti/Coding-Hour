// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return Largest Number
string largestNumber(int n, int sum){
    // Your code here
    if(sum>9*n) return "-1";
    string res;
    for(int i=0;i<n;i++) {
        int temp;
        if(sum>9) {
            temp=9;
            sum-=9;
        }
        else {
            temp=sum;
            sum=0;
        }
        res.push_back(temp+'0');
        
    }
    return res;
    
}

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
        
        //function call
		cout<<largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends