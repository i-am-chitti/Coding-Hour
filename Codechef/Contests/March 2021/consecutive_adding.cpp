/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;


void printArr(vector<vector<ll>> &A, ll R, ll C) {
    cout<<"***************\n";
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++)
            cout<<A[i][j]<<" ";
        cout<<"\n";
    }
}

bool checkEquality(vector<vector<ll>> &A, vector<vector<ll>> &B, ll R, ll C) {
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            if(A[i][j]!=B[i][j]) return 0;
        }
    }
    return 1;
}

void updateRowise(vector<vector<ll>> &A, vector<vector<ll>> &B, ll R, ll C, ll X) {
    //cout<<"Rowise update\n";
    ll diff;
    for(int i=0;i<R;i++) {
        for(int j=0;j<(C-X+1);j++) {
            if(A[i][j]!=B[i][j]) {
                diff=B[i][j]-A[i][j];
                for(int k=j;k<(j+X);k++) A[i][k]+=diff;
            }
        }
    }
}

void updateColumnise(vector<vector<ll>> &A, vector<vector<ll>> &B, ll R, ll C, ll X) {
    //cout<<"Columnwise Update\n";
    ll diff;
    for(int i=0;i<C;i++) {
        for(int j=0;j<(R-X+1);j++) {
            if(A[j][i]!=B[j][i]) {
                diff=B[j][i]-A[j][i];
                for(int k=j;k<(j+X);k++) 
                    A[k][i]+=diff;
            }
            // in array equality check
            // if(j==R-X) {
            //     for(int k=R-X+1;k<R;k++) {
            //         if(A[k][i]!=B[k][i]) return 0;
            //     }
            // }
        }
    }
    //return 1;
}



bool checkConvertibility(vector<vector<ll>> &A, vector<vector<ll>> &B, ll R, ll C, ll X) {
    if(X<=R && X>C) {
        updateColumnise(A,B,R,C,X);
        //printArr(A,R,C);
    }
    else if(X>R && X<=C) {
        updateRowise(A,B,R,C,X);
        //printArr(A,R,C);
    }
    else if(X<=R && X<=C) {
        updateRowise(A,B,R,C,X);
        //printArr(A,R,C);
        updateColumnise(A,B,R,C,X);
    }
    return checkEquality(A,B,R,C);
} 

void solve(){
    ll R,C,X;
    cin>>R>>C>>X;
    vector<vector<ll>> A(R,vector<ll>(C));
    vector<vector<ll>> B(R,vector<ll>(C));
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) cin>>A[i][j];
    }
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) cin>>B[i][j];
    }
    if(checkConvertibility(A,B,R,C,X)) cout<<"Yes\n";
    else cout<<"No\n";
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