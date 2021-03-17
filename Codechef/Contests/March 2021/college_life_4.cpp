/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define big 1e15
using namespace std;
 
typedef long long ll;

ll getMinimum(ll N, ll E, ll H, ll A, ll B, ll C) {
    if(N<=0) return 0;
    ll res = big,temp;
    ll one=1;
    if(2*N<=E) res=min(res,N*A);
    if(3*N<=H) res=min(res,N*B);
    if(N<=E && N<=H) res=min(res,N*C);
    if(E/2>=1 && E/2>=(((3*N)-H+2)/3)) {
        //cout<<"O M "<<res<<"\n";
        if(A<B) {
            temp=min(N-1,E/2);
        }
        else {
            temp=max(one,((3*N)-H+2)/3);
        }
        res=min(res,(temp*(A-B))+(N*B));
    }
    if((H-N)/2>=1 && ((H-N)/2>=(N-E))) {
        //cout<<"M C "<<res<<"\n";
        if(B<C) {
            temp=min(N-1,(H-N)/2);
        }
        else {
            temp=max(one,(N-E));
        }
        res=min(res,(temp*(B-C))+(N*C));
    }
    if(E-N>=1 && E-N>=N-H) {
        //cout<<"O C "<<res<<"\n";
        if(A<C) {
            temp=min(N-1,E-N);
        }
        else {
            temp=max(one,(N-H));
        }
        res=min(res,(temp*(A-C))+(N*C)); 
    }
    if(N>=3 && E>=3 && H>=4) {
        //cout<<"O M C "<<res<<"\n";
        res=min(res,A+B+C+getMinimum(N-3,E-3,H-4,A,B,C));
    }
    return res;
}

void solve(){
    ll N,E,H,A,B,C;
    cin>>N>>E>>H>>A>>B>>C;
    ll res = getMinimum(N,E,H,A,B,C);
    if(res==big) cout<<"-1\n";
    else cout<<res<<"\n";
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