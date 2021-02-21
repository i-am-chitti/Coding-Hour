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
    int nTimes=36000;
    vector<int> freq(13,0);
    srand(time(0));
    while(nTimes--) {
        int dice1=(rand()%6)+1;
        int dice2=(rand()%6)+1;
        freq[dice1+dice2]++;
    }
    cout<<"Sum\tFrequency\n";
    for(int i=2;i<=12;i++) {
        cout<<i<<"\t"<<freq[i]<<endl;
    }
}   
 

int main()
{
        solve();
    return 0;
}