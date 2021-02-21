#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
    double l,r,s,minimum,maximum;
    cin>>T;
    while(T--) {
        cin>>l>>r>>s;
        minimum = ceil(l/s);
        maximum = floor(r/s);
        if(minimum*s<=r && maximum*s>=l) cout<<(int)minimum<<" "<<(int)maximum<<endl;
        else cout<<"-1 -1"<<endl;
    }
}