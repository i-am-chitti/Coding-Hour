#include<iostream>
using namespace std;

int main() {
    int T,N,value;
    cin>>T;
    while(T--) {
        cin>>N;
        string encoded;
        cin>>encoded;
        for(int i=0;i<N;i+=4) {
            value=112;
            if(encoded[i]=='0') value-=8;
            if(encoded[i+1]=='0') value-=4;
            if(encoded[i+2]=='0') value-=2;
            if(encoded[i+3]=='0') value-=1;
            cout<<(char)value;
        }
        cout<<endl;
    }
}