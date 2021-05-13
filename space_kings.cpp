/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

bool comparator(vector<ll> arr1,vector<ll> arr2) {
    if(arr1[1]>=arr2[1]) return 1;
    return 0; 
}

void recur(vector<vector<ll>> alien, ll P, ll Q, ll N, ll gold, ll idx, ll &maxGold, bool isAmarTurn) {
    if(idx==N) {
        maxGold=max(gold,maxGold);
        return;
    }
    cout<<isAmarTurn<<" "<<idx<<"\n";
    if(!isAmarTurn) {
        // Asha takes turn
        if(alien[idx][0]-P<0) {
            gold+=alien[idx][1];
            recur(alien,P,Q,N,gold,idx+1,maxGold,!isAmarTurn);
            gold-=alien[idx][1];
        }
        else {
            // alien is not dead
            alien[idx][0]-=P;
            recur(alien,P,Q,N,gold,idx,maxGold,!isAmarTurn);
            alien[idx][0]+=P;
        }
        // or amar takes the turn
        if(alien[idx][0]-Q<0) recur(alien,P,Q,N,gold,idx+1,maxGold,isAmarTurn);
        else {
            alien[idx][0]-=Q;
            recur(alien,P,Q,N,gold,idx,maxGold,isAmarTurn);
        }
    }
    else {
        // Amar takes turn
        if(alien[idx][0]-Q<0) recur(alien,P,Q,N,gold,idx+1,maxGold,!isAmarTurn);
        else {
            alien[idx][0]-=Q;
            recur(alien,P,Q,N,gold,idx,maxGold,!isAmarTurn);
        }
    }
}

void solve(){
    ll P,Q,N;
    cin>>P>>Q>>N;
    vector<vector<ll>> alien(N,vector<ll>(2));
    for(int i=0;i<N;i++) {
        cin>>alien[i][0];
        cin>>alien[i][1];
    }
    ll maxGold=0;
    sort(alien.begin(),alien.end());
    recur(alien,P,Q,N,0,0,maxGold,0);
    cout<<maxGold<<"\n";
}
 

int main()
{
    //fast_cin();
        solve();
    return 0;
}