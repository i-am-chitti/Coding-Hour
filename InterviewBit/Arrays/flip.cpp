#include<bits/stdc++.h>
using namespace std;

vector<int> flip(string A) {
    vector<int> nZeros(A.size());
    vector<int> nOnes(A.size());
    if(A[0]=='1') {
        nZeros[0]=0;
        nOnes[0]=1;
    }
    else {
        nZeros[0]=1;
        nOnes[0]=0;
    }
    for(int i=1;i<A.size();i++) {
        if(A[i]=='1') {
            nZeros[i]=nZeros[i-1]+1;
            nOnes[i]=nOnes[i-1];
        }
        else {
            nZeros[i]=nZeros[i-1];
            nOnes[i]=nOnes[i-1]+1;
        }
    }

    

}


int main() {
    string x="100100";
    vector<int> res=flip(x);
    cout<<res[0];
}