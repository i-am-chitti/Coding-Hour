#include<bits/stdc++.h>
using namespace std;

string solve(string A) {
    int N=A.size();
    if(N%2) {
        //odd size input
        int j,i=N/2,carry=1;
        while(carry && i>=0) {
            if((A[i]-'0'+carry)>9) {
                A[i]='0';
            }
            else {
                A[i]=A[i]+1;
                carry=0;
            } 
            i--;
        }
        for(i=0,j=N-1;i<N/2;i++,j--) {
            A[j]=A[i];
        } 
    }
    for(int i=0;i<N;i++) cout<<A[i];
}


int main() {
    string s="999";
    solve(s);
}