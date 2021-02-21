#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b) {
    if(b==0) return a;
    return findGcd(b, a%b);
}

int main() {
    int N;
    cin>>N;
    for(int i=N-2;i>0;i--) {
        if(i%2!=0 && findGcd(N,i)==1) {
            cout<<i;
            break;
        }
    }
}