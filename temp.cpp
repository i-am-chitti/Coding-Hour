#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    vector<int> vec;
    int *arr;
    int limit=1000000;
    arr = new int[limit];
    memset(arr,0,sizeof(arr)*limit);
    //for(int i=0;i<20;i++) cout<<arr[i]<<" ";
    arr[2]=3;
    cout<<arr[2]<<" "<<arr[0];
}
 

int main()
{
    fast_cin();
    solve();
    return 0;
}