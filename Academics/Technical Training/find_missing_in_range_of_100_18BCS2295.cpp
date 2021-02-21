/*
	Author: Deepak kumar
	UID: 18BCS2295
	Path: academics/tech_training/
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,temp;
    cin>>N;
    vector<bool> aux(100,0);
    for(int i=0;i<N;i++) {
        cin>>temp;
        if(temp<100) aux[temp]=1;
    }
    int i=0,j;
    while(i<100) {
        if(!aux[i]) {
            j=i+1;
            while(j<100 && !aux[j]) j++;
            if(j-i==1) {
                // only one missing
                cout<<i<<" ";
            }
            else cout<<i<<" - "<<j-1<<" ";
            i=j;
        }
        else i++;
    }
    cout<<endl;
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