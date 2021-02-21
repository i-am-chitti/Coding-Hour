#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> A(N);
    int maxSum=0;
    for(int i=0;i<N;i++) cin>>A[i];
    int min1=INT_MAX,max1=INT_MIN,min2=min1,max2=max1;
    for(int i=0;i<N;i++) {
        max1=max(max1,A[i]+i);
        min1=min(min1,A[i]+i);
        max2=max(max2,A[i]-i);
        min2=min(min2,A[i]-i);
    }
    maxSum=max(max1-min1,max2-min2);
    cout<<maxSum;
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}