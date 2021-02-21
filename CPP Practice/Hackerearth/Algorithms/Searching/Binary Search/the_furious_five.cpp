#include<bits/stdc++.h>
using namespace std;

int FX(int N) {
    int n=0;
    while(N%5==0) {
        n++;
        N/=5;
    }
    return n;
}

long long answer (int N) {
   // Write your code here
   long long sum=0,X=1;
   while(sum<N) {
       sum+=FX(X);
       X++;
   }
   return X;    
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

        long long out_;
        out_ = answer(N);
        cout << out_;
        cout << "\n";
    }
}