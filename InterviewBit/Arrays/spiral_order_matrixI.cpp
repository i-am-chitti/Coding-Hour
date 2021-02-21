#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    vector<vector<int> > A{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int R=A.size(),C=A[0].size();
    int t=0,b=R-1,l=0,r=C-1,dir=0;
    while(t<=b && l<=r) {
        if(dir==0) {for(int j=l;j<=r;j++) {
            cout<<A[t][j]<<" ";
        }
        t++;
        }
        else if(dir==1) {
        for(int j=t;j<=b;j++) {
            cout<<A[j][r]<<" ";
        }
        r--;
        }
        else if(dir==2) {
            for(int j=r;j>=l;j--) {
                cout<<A[b][j]<<" ";
            }
            b--;
        }
        else if(dir==3) {
            for(int j=b;j>=t;j--) {
                cout<<A[j][l]<<" ";
            }
            l++;
        }
        dir=(dir+1)%4;
    }
}
 

int main()
{
    fast_cin();
    solve();
    return 0;
}