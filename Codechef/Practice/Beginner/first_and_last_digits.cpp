#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

int solve(int N){
    int sum=N%10;
    int rev=0,rem=0;
    while(N>0) {
        rev=rev*10+(N%10);
        N/=10;
    }
    sum+=rev%10;
    return sum;
}

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        ll N;
        cin>>N;
        cout<<solve(N)<<endl;
    }
    return 0;
}