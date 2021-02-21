#include<bits/stdc++.h>
using namespace std;

int subtractOne(int num) {
    int m=1;
    //flip all bits to 1 till we encounter 1 first time
    while(!(num&m)) {
        num^=m;
        m<<=1;
    }
    num^=m;
    return num;
}

int main() {
    int N;
    cin>>N;
    cout<<subtractOne(N);
}