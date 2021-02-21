#include<bits/stdc++.h>
using namespace std;

void multiplyMatrix(long long F[2][2], long long M[2][2]) {
    long long m = F[0][0]*M[0][0] + F[0][1]*M[1][0];
    long long n = F[0][0]*M[0][1] + F[0][1]*M[1][1];
    long long o = F[1][0]*M[0][0] + F[1][1]*M[1][0];
    long long p = F[1][0]*M[0][1] + F[1][1]*M[1][1];
    F[0][0]=m;
    F[0][1]=n;
    F[1][0]=o;
    F[1][1]=p;
}

void power(long long F[2][2], long long n) {
    if(n==0 || n==1) return;
    long long M[2][2] = {{1,1}, {1,0}};
    //O(N) power calls
    // for(int i=2;i<=n;i++) {
    //     multiplyMatrix(F, M);
    // }
    power(F, n/2);
    multiplyMatrix(F, F);
    if(n%2!=0) multiplyMatrix(F, M);
}

long long fib1(long long n) {
    //not suitable for larger values
    if(n==0) return 0;
    long long F[2][2] = {{1,1}, {1,0}};
    power(F, n-1);
    return F[0][1];
}

long long fib2(long long n) {
    //using Binet's formula
    double x = (1+sqrt(5))/2;
    return round(pow(x, n)/sqrt(5));
}

int main() {
    vector<long long> fibContainer;
    for(int i=1;i<=50;i++) {
        fibContainer.push_back(fib2(i));
    }
    for(int i=0;i<fibContainer.size();i++) cout<<fibContainer[i]<<" ";
}