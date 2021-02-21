#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(int N){
    vector<int> arr(N+1),aux(N+1);
    for(int i=1;i<=N;i++) {
        cin>>arr[i];
        aux[arr[i]]=i;
    }
    bool isAmbiguous=1;
    for(int i=1;i<=N;i++) {
        if(arr[i]!=aux[i]) {
            isAmbiguous=0;
            break;
        }
        //cout<<aux[i]<<" ";
    }
    if(isAmbiguous) cout<<"ambiguous\n";
    else cout<<"not ambiguous\n";
}
 

int main()
{
    fast_cin();
    int N;
    cin >> N;
    while(N!=0) {
        solve(N);
        cin>>N;
    }
    return 0;
}