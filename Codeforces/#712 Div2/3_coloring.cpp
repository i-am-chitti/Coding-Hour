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
    vector<vector<int>> white,black;
    int temp=0;
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if((i+j)%2) white.push_back({i,j});
            else black.push_back({i,j});
        }
    }
    //for(int i=0;i<white.size();i++) cout<<white[i][0]<<" "<<white[i][1]<<"\n";
    for(int i=0;i<N*N;i++) {
        cin>>temp;
        int n1=black.size(),n2=white.size();
        if(temp==1) {
            if(n1>0) {
                cout<<"2 "<<black[n1-1][0]<<" "<<black[n1-1][1]<<"\n";
                cout.flush();
                black.pop_back();
            }
            else {
                cout<<"3 "<<white[n2-1][0]<<" "<<white[n2-1][1]<<"\n";
                cout.flush();
                white.pop_back();
            }
        }
        else if(temp==2) {
            if(n2>0) {
                cout<<"1 "<<white[n2-1][0]<<" "<<white[n2-1][1]<<"\n";
                cout.flush();
                white.pop_back();
            }
            else {
                cout<<"3 "<<black[n1-1][0]<<" "<<black[n1-1][1]<<"\n";
                cout.flush();
                black.pop_back();
            }
        }
        else {
            if(n2>0) {
                cout<<"1 "<<white[n2-1][0]<<" "<<white[n2-1][1]<<"\n";
                cout.flush();
                white.pop_back();
            }
            else {
                cout<<"2 "<<black[n1-1][0]<<" "<<black[n1-1][1]<<"\n";
                cout.flush();
                black.pop_back();
            }
        }
        
    }
}
 

int main()
{
    fast_cin();
    solve();
    return 0;
}