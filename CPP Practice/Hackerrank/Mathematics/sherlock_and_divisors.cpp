#include<bits/stdc++.h>
using namespace std;

int divisors(int num) {
    if(num%2!=0) return 0;
    int count=0;
    for(int i=1;i<=sqrt(num);i++) {
        if(num%i==0) {
            if(num/i==i) {
                 if(i%2==0) count++; 
             }
             else {
                 if(i%2==0) count++;
                 if(num/i%2==0) count++;
             }
        }
    }
    return count;
}


int main() {
    cout<<divisors(56);
}