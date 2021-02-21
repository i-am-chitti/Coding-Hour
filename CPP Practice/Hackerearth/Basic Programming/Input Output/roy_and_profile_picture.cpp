#include<bits/stdc++.h>
using namespace std;

int main() {
	int L,N,W,H;
    cin>>L>>N;
    while(N--) {
        cin>>W>>H;
        if(W<L || H<L) cout<<"UPLOAD ANOTHER"<<endl;
        else {
            if(W==H) cout<<"ACCEPTED"<<endl;
            else cout<<"CROP IT"<<endl;
        }
    }
}