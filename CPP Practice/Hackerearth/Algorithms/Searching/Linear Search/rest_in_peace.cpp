#include<bits/stdc++.h>
using namespace std;

bool is21Present(long long n) {
    ostringstream ss;
    ss << n;
    string num = ss.str();
    for(int i=0;i<num.size()-1;i++) {
        if(num[i]=='2') {
            if(num[i+1]=='1') return 1;
        }
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    long long n;
    while(t--) {
        cin>>n;
        if(is21Present(n) || n%21==0) cout<<"The streak is broken!"<<endl;
        else cout<<"The streak lives still in our heart!"<<endl;
    }
}