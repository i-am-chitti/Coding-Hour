#include <bits/stdc++.h>  
#define MAX 1000001
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool isPrime(int N) {
    for(int i=2;i*i<=N;i++) {
        if(N%i==0) return 0;
    }
    return 1;
} 

void solve(){
    int count=0;
    vector<int> nPrimes(MAX,0);
    nPrimes[0]=0;
    nPrimes[1]=0;
    for(int i=2;i<MAX;i++) {
        if(isPrime(i)) count++;
        nPrimes[i]=count;
    }
    int T,X,Y;
    cin>>T;
    while(T--) {
        cin>>X>>Y;
        if(nPrimes[X]<=Y) cout<<"Chef\n";
        else cout<<"Divyam\n";
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}