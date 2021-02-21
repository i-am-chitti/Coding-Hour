#include<bits/stdc++.h>
using namespace std;

int main() {
	int T,G,P,q1,q2,N,Nq1=0,Nq2=0;
    cin>>T;
    while(T--) {
        cin>>G>>P>>N;
        for(int i=0;i<N;i++) {
            cin>>q1>>q2;
            Nq1+=q1;
            Nq2+=q2;
        }
        int minCost = G<P?((Nq1<Nq2?(G*Nq2)+(P*Nq1):(G*Nq1)+(P*Nq2))):((Nq1<Nq2)?(G*Nq1)+(P*Nq2):(G*Nq2)+(P*Nq1));
        cout<<minCost<<endl;
        Nq1=0;
        Nq2=0;
    }
}