/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void shuffle(int card[], int n) 
{
    for (int i=0; i<n ;i++) { 
        int r = i + (rand() % (52 -i)); 
        swap(card[i], card[r]); 
    } 
}  

void solve(){
    int card[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 
               9, 10, 11, 12, 13, 14, 15, 
               16, 17, 18, 19, 20, 21, 22, 
               23, 24, 25, 26, 27, 28, 29, 
               30, 31, 32, 33, 34, 35, 36, 
               37, 38, 39, 40, 41, 42, 43, 
               44, 45, 46, 47, 48, 49, 50, 
               51};
    shuffle(card,52);
    for(int i=0;i<52;i++) cout<<card[i]<<" "; 
    cout<<"\n";
    
}
 

int main()
{
    srand(time(0)); 
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}