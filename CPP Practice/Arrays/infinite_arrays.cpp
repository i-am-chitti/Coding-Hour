#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

vector<long long> solve (vector<int> A, vector<long long int> R, vector<long long int> L) {
   // write your code here
    ll totalSum=0;
    int n=A.size();
    vector<ll> res;
    vector<ll> prefixSum(n,0),suffixSum(n,0);
    suffixSum[0]=A[0];
    prefixSum[n-1]=A[n-1];
    for(int i=1;i<n;i++) {
        suffixSum[i]=(suffixSum[i-1]+A[i])%mod;
    }
    for(int i=n-2;i>=0;i--) {
        prefixSum[i]=(prefixSum[i+1]+A[i])%mod;
    }
    for(int i=0;i<n;i++) cout<<suffixSum[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<prefixSum[i]<<" ";
    cout<<endl;
    for(int i=0;i<R.size();i++) {
        L[i]--;
        R[i]--;
        ll sum=0;
        sum+=(((R[i]-L[i]+1)/3)*prefixSum[0])%mod;
        if(L[i]!=0)
            sum+=(prefixSum[L[i]%n])%mod;
        if(R[i]!=n-1)
            sum+=(suffixSum[R[i]%n])%mod;
        res.push_back(sum);
    }
    return res;
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
        vector<int> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }
        int Q;
        cin >> Q;
        vector<long long int> L(Q);
        for(int i_L=0; i_L<Q; i_L++)
        {
        	cin >> L[i_L];
        }
        vector<long long int> R(Q);
        for(int i_R=0; i_R<Q; i_R++)
        {
        	cin >> R[i_R];
        }

        vector<long long> out_;
        out_ = solve(A, R, L);
        cout << out_[0];
        for(int i_out_=1; i_out_<out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}