#include<bits/stdc++.h>
using namespace std;

int convertIntoBinary(int n) {
    if(n==0) return 0;
    else return n%2+10*convertIntoBinary(n/2);
}

string decToBinary(int num) {
    string binary;
    int k;
    for(int i=31;i>=0;i--) {
        k=num>>i;
        if(k&1) binary.push_back('1');
        else binary.push_back('0');
    }
    return binary;
}

string decToBinaryWithoutOperator(int num) {
    if(num==0) return "0";
    string binary="";
    char c;
    while(num>0) {
        if(num&1) c='1';
        else c='0';
        num>>=1;
        binary=c+binary;
    }
    return binary;
}

int main() {
    int n;
    cin>>n;
    //cout<<convertIntoBinary(500);
    //cout<<endl<<decToBinary(n);
    cout<<endl<<decToBinaryWithoutOperator(n);
}