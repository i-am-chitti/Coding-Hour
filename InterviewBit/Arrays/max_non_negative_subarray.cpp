#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];
    int l=0,h=0,local=0;
    ll maxSum=0,sum=0;
    for(int i=0;i<N;i++) {
        if(A[i]>=0) {
            sum+=A[i];
            if(sum>maxSum || (sum==maxSum && i-local>h-l) || (sum==maxSum && local<l)) {
                l=local;
                h=i;
                maxSum=sum;
            }
        }
        else {
            sum=0;
            local=i+1;
        }
    }
    for(int i=l;i<=h;i++) cout<<A[i]<<" ";
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}