#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
int arr[]={1,2,4,8,16,32,64,128,256,512,1024,2048};

void solve(){
    int i,N,count=0;
    cin>>N;
    while(N>2048) {
        count++;
        N-=2048;
    }
    for(i=11;i>=0;i--) {
        if(arr[i]<=N) {
            count++;
            break;
        }
    }
    if(arr[i]==N) cout<<count;
    else {
        int sum=arr[i];
        while(i>=0) {
            if(sum+arr[i]<=N) {
                count++;
                sum+=arr[i];
            }
            i--;
        }
        if(sum==N) cout<<count;
        else cout<<"0";
    }
    cout<<endl;
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