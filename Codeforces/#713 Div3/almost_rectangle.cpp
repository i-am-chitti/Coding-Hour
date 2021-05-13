/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

void solve(){
    int N;
    cin>>N;
    vector<string> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];

    //get position of two stars
    int aux[2][2];
    memset(aux,-1,sizeof(aux));
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(arr[i][j]=='*') {
                if(aux[0][0]==-1) {
                    aux[0][0]=i;
                    aux[0][1]=j;
                }
                else {
                    aux[1][0]=i;
                    aux[1][1]=j;
                }
            }
        }
    }
    // cout<<aux[0][0]<<" "<<aux[0][1]<<"\n";
    // cout<<aux[1][0]<<" "<<aux[1][1]<<"\n";
    if(aux[0][0]==aux[1][0]) {
        // same row but different column
        if(aux[0][0]==N-1) {
            // extreme row
            arr[aux[0][0]-1][aux[0][1]]='*';
            arr[aux[1][0]-1][aux[1][1]]='*';
        }
        else {
            arr[aux[0][0]+1][aux[0][1]]='*';
            arr[aux[1][0]+1][aux[1][1]]='*';
        }
    } 
    else if(aux[0][1]==aux[1][1]) {
        // same column but row
        if(aux[0][1]==N-1) {
            // extreme row
            arr[aux[0][0]][aux[0][1]-1]='*';
            arr[aux[1][0]][aux[0][1]-1]='*';
        }
        else {
            arr[aux[0][0]][aux[0][1]+1]='*';
            arr[aux[1][0]][aux[1][1]+1]='*';
        }
    }
    else {
        // in different row and different column
        arr[aux[0][0]][aux[1][1]]='*';
        arr[aux[1][0]][aux[0][1]]='*';
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) cout<<arr[i][j];
        cout<<"\n";
    } 

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