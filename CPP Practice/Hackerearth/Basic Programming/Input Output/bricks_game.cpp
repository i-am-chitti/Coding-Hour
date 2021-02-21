#include<bits/stdc++.h>
using namespace std;

int main() {
	int N,i=1;
    cin>>N;
    while(true) {
        N-=i;
        if(N<=0) {
            cout<<"Patlu";
            break;
        }
        N-=i*2;
        if(N<=0) {
            cout<<"Motu";
            break;
        }
        i++;
    }
}