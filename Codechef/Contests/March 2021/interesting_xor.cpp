/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

vector<int> getBinary(ll C) {
    vector<int> binary;
    while(C>0) {
        binary.push_back(C%2);
        C/=2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}

ll binaryToDecimal(vector<int> &arr) {
    ll num=0,N=1;
    for(int i=arr.size()-1;i>=0;i--) {
        num+=N*arr[i];
        N*=2;
    }
    return num;
}

void solve(){
    ll C;
    cin>>C;
    vector<int> binaryC = getBinary(C);
    ll N=binaryC.size();
    vector<int> binaryA(N),binaryB(N);
    binaryA[0]=binaryC[0];
    binaryB[0]=0;
    for(int i=1;i<N;i++) {
        if(binaryC[i]==0) {
            binaryA[i]=1;
            binaryB[i]=1;
        }
        else {
            binaryA[i]=0;
            binaryB[i]=1;
        }
    }
    ll A=0,B=0;
    A = binaryToDecimal(binaryA);
    B = binaryToDecimal(binaryB);
    cout<<A<<" "<<B<<" "<<A*B<<"\n";
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}