#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long fact(long long n) {
    if(n<=1) return 1;
    return ((n%mod) * (fact(n-1)%mod)) % mod;
}

long long inv(long long n, long long exp) {
    long long res=1;
    while(exp) {
        if(exp%2==1) res=((res%mod)* (n%mod)) % mod;
        n = ((n%mod) * (n%mod))%mod;
        exp/=2;
    }
    return res;
}

// Complete the solve function below.
long long solve(long long n, long long m) {
    long long num = fact(n+m-2);
    long long deno1 = ((fact(n-1)%mod) * (fact(m-1)%mod)) % mod;
    long long deno = inv(deno1, mod-2);
    return ((num%mod) * (deno%mod))%mod;
}

int main() {
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
}