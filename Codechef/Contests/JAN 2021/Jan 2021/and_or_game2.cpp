#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<set>
#include<iterator>
#include<stack>
#define ll long long
using namespace std;

void andOrGame2(int A[], int B[], int N, int M, int i, int V, set<ll> &unique, int &nCalls) {
    if(i<N) {
        if(unique.find(V|A[i])==unique.end()) {
            unique.insert(V|A[i]);
            andOrGame2(A,B,N,M,i+1,V|A[i],unique, ++nCalls);
        }
    }
    if(i<M) {
        if(unique.find(V&B[i])==unique.end()) {
            unique.insert(V&B[i]);
            andOrGame2(A,B,N,M,i+1,V&B[i],unique,++nCalls);
        }
    }
    if(i<M || i<N) andOrGame2(A,B,N,M,i+1,V,unique,++nCalls);
    return;
}

int andOrGame(int A[], int B[], int N, int M) {
    set<ll> unique;
    stack<ll> values;
    unique.insert(0);
    values.push(0);
    while(!values.empty()) {
        int x=values.top();
        values.pop();
        for(int i=0;i<N;i++) {
            int y=A[i];
            if(unique.find(x|y) == unique.end()) {
                unique.insert(x|y);
                values.push(x|y);
            }
        }
        for(int i=0;i<M;i++) {
            int y=B[i];
            if(unique.find(x&y) == unique.end()) {
                unique.insert(x&y);
                values.push(x&y);
            }
        }
    }
    return unique.size();
}

int main() {
    int T,N,M;
    cin>>T;
    while(T--) {
        cin>>N>>M;
        int A[N],B[M];
        for(int i=0;i<N;i++) {
            cin>>A[i];
        }
        for(int i=0;i<M;i++) {
            cin>>B[i];
        }
        cout<<andOrGame(A,B,N,M)<<endl;
        // set<ll> unique;
        // unique.insert(0);
        // int nCalls=0;
        // andOrGame2(A,B,N,M,0,0,unique,nCalls);
        // cout<<nCalls<<"  "<<unique.size()<<endl;
    }
}