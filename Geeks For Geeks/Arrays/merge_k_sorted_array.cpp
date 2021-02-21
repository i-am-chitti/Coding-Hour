// { Driver Code Starts
#include<bits/stdc++.h>


#define N 105
using namespace std;

int *mergeKArrays(int arr[][N],int k);

void printArray(int arr[], int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int arr[N][N];
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	int *output = mergeKArrays(arr, k);
	printArray(output, k*k);
	cout<<endl;
}
	return 0;
}// } Driver Code Ends


// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
int *mergeKArrays(int arr[][N], int k)
{
//code here
    int *l1=arr[0];
    int size=k;
    for(int i=1;i<k;i++) {
        int *l2=arr[i];
        size+=k;
        int *res = new int[size];
        int resK=0,i1=0,i2=0;
        while(i1<k && i2<k) {
            if(l1[i1]<l2[i2]) res[resK++]=l1[i1++];
            else res[resK++]=l2[i2++];
        }
        while(i1<k) {
            res[resK++]=l1[i1++];
        }
        while(i2<k) res[resK++]=l2[i2++];
        l1=res;
    }
    return l1;
}