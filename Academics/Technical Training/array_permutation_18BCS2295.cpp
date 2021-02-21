/*
	Author: Deepak kumar
	UID: 18BCS2295
	Path: academics/tech_training/
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
void printArray(vector<int> &arr) {
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void permute(vector<int> &arr, int l, int h) {
    if(l==h) printArray(arr);
    else {
        for(int i=l;i<=h;i++) {
            swap(arr[i],arr[l]);
            permute(arr,l+1,h);
            swap(arr[i],arr[l]);
        }
    }
}


void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    permute(arr,0,N-1);
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}