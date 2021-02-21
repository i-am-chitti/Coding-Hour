#include<bits/stdc++.h>
#define limit 1000000007
using namespace std;

vector<long long> ans (100001,-1);

long long factorial(long long N) {
    if(N<2) return 1;
    if(ans[N]!=-1) return ans[N];
    else return ans[N]=(N%limit * factorial(N-1)%limit) % limit;
}

int main() {
	int T;
    cin>>T;
    long long N;
    while(T--) {
        cin>>N;
        cout<<factorial(N)<<endl;
    }
}