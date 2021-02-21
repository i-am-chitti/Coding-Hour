#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

long long nCr(long long n, long long r) {
    if(n-r>r) r = n-r;
    long long p=1,m=1;
    while(r>0) {
        p*=n;
        m*=r;
        long long g = gcd(p, m);
        p/=g;
        m/=g;
        n--;
        r--;
    }
    return p;
}

int main() {
    cout<<nCr(1050,26);
}