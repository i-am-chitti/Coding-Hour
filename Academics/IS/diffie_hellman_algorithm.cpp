/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

ll MAX=10001;
vector<ll> primes;

void generatePrime() {
    bool primeNumbers[MAX];
    
    for(ll i=0; i<MAX; i++) {
        if(i%2 == 0 && i != 2) {
            primeNumbers[i] = false;
        }
        else {
            primeNumbers[i] = true;
        }
    }

    for(ll i=2; i*i<MAX; i++) {
        if(primeNumbers[i]) {
            for(int j=i*i; j<MAX; j+=i) {
                primeNumbers[j] = false;
            }
        }
    }

    for(ll i=2;i<MAX;i++) {
        if(primeNumbers[i]) {
            primes.push_back(i);
        }
    }
}

ll power(ll n, ll exp, ll mod) {
    long long res=1;
    while(exp) {
        if(exp%2==1) res = ((res%mod) * (n%mod))%mod;
        n = ((n%mod) * (n%mod))%mod;
        exp/=2;
    }
    return res;
}

void solve(){
    cout<<"********************************\n";
    ll N = primes.size();
    ll P, G, x, a, y, b, ka, kb; 
    P=primes[rand()%(N+1)];
    //cout<<"P= "<<P<<"\n";
    G=rand();
    //cout<<"G= "<<G<<"\n";
    a=rand();
    cout<<"Private key for Alice= "<<a<<"\n";
    x=power(G,a,P);
    b=rand();
    cout<<"Private key for Bob= "<<b<<"\n";
    y=power(G,b,P);
    ka=power(y,a,P);
    kb=power(x,b,P);
    cout<<"Secret key for Alice= "<<ka<<"\n";
    cout<<"Secret key for Bob= "<<kb<<"\n";
    cout<<"**********************************\n";
}
 

int main()
{
    srand(time(0));
    generatePrime();
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}