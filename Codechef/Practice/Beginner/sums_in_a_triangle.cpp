#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<vector<int>> arr;
    for(int i=1;i<=N;i++) {
        vector<int> temp(i);
        for(int j=0;j<i;j++) cin>>temp[j];
        arr.push_back(temp);
    }
    for(int i=1;i<N;i++) {
        for(int j=0;j<=i;j++) {
            if(j==0) arr[i][j] += arr[i-1][j];
            else if(j==i) arr[i][j]+=arr[i-1][j-1];
            else arr[i][j]+=max(arr[i-1][j-1],arr[i-1][j]);
        }
    }
    int maximum=INT_MIN;
    for(int i=0;i<N;i++) {
        for(int j=0;j<=i;j++) maximum=max(maximum,arr[i][j]); 
    }
    cout<<maximum<<endl;
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