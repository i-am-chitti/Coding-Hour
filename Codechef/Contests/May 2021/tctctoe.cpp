/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    char game[3][3];
    int Xcount=0,Ocount=0,_count=0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>game[i][j];
            if(game[i][j]=='X') Xcount++;
            else if(game[i][j]=='O') Ocount++;
            else _count++;
        }
    }

    int xCount=0,oCount=0;

    if(game[0][0]==game[1][1] && game[2][2]==game[1][1]) {
        if(game[1][1]=='X') xCount++;
        else if(game[1][1]=='O') oCount++;
    }

    for(int i=0;i<3;i++) {
        if(game[0][i]==game[1][i] && game[2][i]==game[1][i]) {
            if(game[0][i]=='X') xCount++;
            else if(game[0][i]=='O') oCount++;
        } 
    }

    for(int i=0;i<3;i++) {
        if(game[i][0]==game[i][1] && game[i][2]==game[i][1]) {
            if(game[i][0]=='X') xCount++;
            else if(game[i][0]=='O') oCount++;
        } 
    }

    if(game[1][1]==game[0][2] && game[2][0]==game[1][1]) {
        if(game[1][1]=='X') xCount++;
        else if(game[1][1]=='O') oCount++;
    }

    if(Ocount > Xcount || Xcount-Ocount>1) cout<<3;
    else if(Xcount>Ocount && xCount==1 && oCount==0) cout<<1;
    else if(Xcount==Ocount && oCount==1 && xCount==0) cout<<1;
    else if(_count==0 && (xCount==2 || xCount+oCount==0)) cout<<1;
    else if(_count>0 && xCount+oCount==0) cout<<2;
    else cout<<3;
    cout<<"\n";

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