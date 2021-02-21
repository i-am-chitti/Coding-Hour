#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long fact(long long n) {
    if(n<=1) return 1;
    return ((n%mod) * (fact(n-1)%mod))%mod;
}

long long power(long long n, long long exp) {
    long long res=1;
    while(exp) {
        if(exp%2==1) res = ((res%mod) * (n%mod))%mod;
        n = ((n%mod) * (n%mod))%mod;
        exp/=2;
    }
    return res;
}

int solve(int n, int m) {
    long long num = fact(n+m-1);
    long long deno = ((fact(n)%mod) * (fact(m-1)%mod))%mod;
    deno = power(deno, mod-2);
    return ((num%mod) * (deno%mod))%mod;
}

int main() {
    int n,m,t;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
}