#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int i=0,j=N-1;
    bool temp=0;
    long long tSum=0;
    while(i<j) {
        tSum+=abs(arr[i]-arr[j]);
        if(!temp) {
            i++;
            temp=1;
        }
        else {
            j--;
            temp=0;
        }
    }
    tSum+=abs(arr[0]-arr[i]);
    cout<<tSum<<endl;
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}