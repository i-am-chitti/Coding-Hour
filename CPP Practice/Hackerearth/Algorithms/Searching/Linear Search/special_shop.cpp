#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int T;
    ll N,A,B;
    cin>>T;
    while(T--) {
        cin>>N>>A>>B;
        ll minX = (N*B)/(A+B);
        ll minCost = (A*minX*minX)+(B*(N-minX)*(N-minX));
        ll minX2 = minX+1;
        ll minCost2 = (A*minX2*minX2)+(B*(N-minX2)*(N-minX2));
        cout<<min(minCost,minCost2)<<endl;
        
    }
}