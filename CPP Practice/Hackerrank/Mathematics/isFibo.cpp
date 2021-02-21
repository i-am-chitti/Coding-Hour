#include<bits/stdc++.h>
using namespace std;

vector<long long> fibContainer;

long long nthFib(long long n) {
    //using Binet's formula
    double x = (1+sqrt(5))/2;
    return round(pow(x, n)/sqrt(5));
}

void generateFibSeries() {
    for(int i=1;i<=50;i++) {
        fibContainer.push_back(nthFib(i));
    }
}

string isFibo(long n) {
    vector<long long>::iterator it;
    it = find(fibContainer.begin(), fibContainer.end(), n);
    if(it!=fibContainer.end()) return "YES";
    else return "NO";
}

int main() {
    generateFibSeries();
    long long t,n;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n;
        cout<<isFibo(n)<<endl;
    }
}