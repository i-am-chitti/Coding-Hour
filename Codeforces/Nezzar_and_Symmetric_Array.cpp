#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(map<ll,ll> map) {
    for(auto it=map.begin();it!=map.end();it++) {
        if(it->first%2==1 || it->second!=2) return 0;
    }
    return 1;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N,temp;
        cin>>N;
        map<ll,ll> map;
        for(int i=0;i<2*N;i++) {
            cin>>temp;
            map[temp]++;
        }
        if(solve(map)) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}