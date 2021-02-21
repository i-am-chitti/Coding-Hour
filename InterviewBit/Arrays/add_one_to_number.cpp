#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    vector<int> A{0};
    int N=A.size(),carry=0,i=0;
    while(i<N && A[i]==0) i++;
    if(i<N) A.erase(A.begin(),A.begin()+i);
    N=A.size();
    A[N-1]+=1;
    if(A[N-1]>9) {
        A[N-1]-=10;
        carry=1;
        i=N-2;
        while(carry && i>=0) {
            A[i]+=carry;
            if(A[i]<10) carry=0;
            else A[i]-=10;
            i--;
        }
        if(carry) {
            reverse(A.begin(),A.end());
            A.push_back(carry);
            reverse(A.begin(),A.end());
        }
    }
    for(int i=0;i<A.size();i++) cout<<A[i]<<" ";
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}