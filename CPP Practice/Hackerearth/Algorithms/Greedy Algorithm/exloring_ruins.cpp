#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int N=str.length();
    for(int i=0;i<N;i++) {
        if(str[i]=='?') {
            if(i==0) {
                //first index
                if(i+1<N) {
                    if(str[i+1]=='a') str[i]='b';
                    else str[i]='a';
                }
                else {
                    str[i]='a';
                }
            }
            else if(i+1==N) {
                // last index
                if(str[i-1]=='a') str[i]='b';
                else str[i]='a';
            }
            else {
                if(str[i-1]=='a' || str[i+1]=='a') str[i]='b';
                else str[i]='a';
            }
        }
    }
    cout<<endl<<str;
}