#include<bits/stdc++.h>
using namespace std;

int main() {
    long long S,N,R,n,max,h;
    cin>>S;
    while(S--) {
        cin>>N>>R;
        n=1;
        cin>>max;
        for(int i=1;i<N;i++) {
            cin>>h;
            if(h>max) {
                n++;
                max=h;
            }
        }
        cout<<n*R<<endl;
    }
}