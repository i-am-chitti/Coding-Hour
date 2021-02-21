#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M,t;
    cin>>N;
    vector<int> A;
    for(int i=0;i<N;i++) {
        cin>>t;
        A.push_back(t);
    }
    sort(A.begin(), A.end());

    cin>>M;
    vector<int> C;
    for(int i=0;i<M;i++) {
        cin>>t;
        C.push_back(t);
    }
    sort(C.begin(), C.end());
    int max = C[M-1]-A[N-1], min=C[0]-A[0];
    vector<int> B;
    for(int i=min;i<=max;i++) {
        for(int j=0;j<N;j++) {
            if(find(C.begin(), C.end(), A[j]+i)!=C.end()) {
                if(find(B.begin(), B.end(), i)==B.end()) B.push_back(i);
            } 
        }
    }
    for(int i=0;i<B.size();i++) cout<<B[i]<<" ";
}