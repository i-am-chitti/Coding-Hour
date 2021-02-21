#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

vector<int>* sievePrime() {
    bool primeNumbers[MAX];
    
    for(int i=0; i<MAX; i++) {
        if(i%2 == 0 && i != 2) {
            primeNumbers[i] = false;
        }
        else {
            primeNumbers[i] = true;
        }
    }

    for(int i=2; i*i<MAX; i++) {
        if(primeNumbers[i]) {
            for(int j=i*i; j<MAX; j+=i) {
                primeNumbers[j] = false;
            }
        }
    }

    vector<int>* primes = new vector<int>();

    for(int i=2;i<MAX;i++) {
        if(primeNumbers[i]) {
            primes->push_back(i);
        }
    }

    return primes;
}

void printPrimes(long long l, long long u, vector<int>* &primes) {
    bool segmentedPrimes[u-l+1];
    for(int i=0; i<=u-l; i++) {
        segmentedPrimes[i] = true;
    }
    for(int i=0; primes->at(i)*(long long)primes->at(i)<=u; i++) {
        int currPrime = primes->at(i);
        long long base = (l/(currPrime)) * (currPrime);
        if(base < l) {
            base += currPrime;
        }
        for(long long j=base; j<=u; j+=currPrime) {
            segmentedPrimes[j-l] = false;
        }
        if(base == currPrime) {
            segmentedPrimes[base-l] = true;
        }
    }

    for(int i=0; i<=u-l; i++) {
        if(segmentedPrimes[i]) {
            printf("%lld\n", i+l);
        }
    }

}

int main() {
    vector<int>* primes;
    primes = sievePrime();
    int nT;
    long long l, u;
    cin>>nT;
    while(nT--) {
        scanf("%lld", &l);
        scanf("%lld", &u);
        printPrimes(l, u, primes);
    }

}