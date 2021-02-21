#include<bits/stdc++.h>
using namespace std;

int moveFrog(int X, int Y, int s, int T) {
    int c=0;
    for(int i=0,j=T;i<=T;i++,j--) {
        if(j>=Y && j<Y+s) {
            c+=min(max(0,i-X+1),s+1);
        }
    }
    return c;
}

int solve(int X, int Y, int s, int T) {
    int c=0;
    for(int i=X;i<X+s;i++) {
        for(int j=Y;j<Y+s;j++) {
            if(i+j<=T) c++;
        }
    }
    return c;
}

int main() {
    int X,Y,s,T;
    cin>>X>>Y>>s>>T;
    //cout<<moveFrog(X,Y,s,T)<<endl;
    cout<<solve(X,Y,s,T);
}