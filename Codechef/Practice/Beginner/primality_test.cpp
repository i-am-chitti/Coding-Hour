#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MAX 100006
using namespace std;
 
typedef long long ll;

vector<bool> primes(MAX,1);

void generatePrime() {
    for(int i=2;i*i<MAX;i++) {
        if(primes[i]) {
            for(int j=i*i;j<MAX;j+=i) primes[j]=0;
        }
    }
    primes[1]=0;
}

void solve(){
    int N;
    cin>>N;
    if(primes[N]) cout<<"yes\n";
    else cout<<"no\n";
}
 

int main()
{
    fast_cin();
    generatePrime();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}