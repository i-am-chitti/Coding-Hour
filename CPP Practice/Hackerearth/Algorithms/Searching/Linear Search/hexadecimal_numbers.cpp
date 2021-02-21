#include<bits/stdc++.h>
using namespace std;

int hexDigitsSum(int N) {
    int sum=0;
    while(N>0) {
        sum+=N%16;
        N/=16;
    }
    return sum;
}

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int L,R;
        cin>>L>>R;
        int c=0;
        for(int i=L;i<R+1;i++) {
            if(gcd(i, hexDigitsSum(i)) > 1) c++;
        }
        cout<<c<<endl;
    }
}