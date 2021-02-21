#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    int N,rem; //ticket number
    cin>>T;
    while(T--) {
        cin>>N;

        string ws=" WS\n", as=" AS\n", ms=" MS\n";
        
        //window seat at N%6==0 || N%6==1
        if(N%6==0) {
            if(N%4==0) cout<<N-11;
            else cout<<N+1;
            cout<<ws;
        }
        else if(N%6==1) {
            if(N%4==1) cout<<N+11;
            else cout<<N-1;
            cout<<ws;
        }
        //middle seat at N%6==2 || N%6==5
        else if(N%6==2 || N%6==5) {
            rem=N%4;
            if(rem==0) cout<<N-3;
            if(rem==1) cout<<N+3;
            if(rem==2) cout<<N+9;
            if(rem==3) cout<<N-9;
            cout<<ms;
        }
        else {
            rem=N%4;
            if(rem==0) cout<<N+5;
            if(rem==1) cout<<N-5;
            if(rem==2) cout<<N-7;
            if(rem==3) cout<<N+7;
            cout<<as;
        }
    }
}