#include<bits/stdc++.h>
#define limit 1000000007
using namespace std;

int solve (vector<long long> A) {
   // Write your code here
   long long N=A.size();
   long long K=pow(2,N-1), sum=0;
   for(int i=0;i<N;i++) {
       if(A[i]>=K) sum=sum+A[i]; 
   }
   return sum%limit;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}