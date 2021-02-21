#include<bits/stdc++.h>
using namespace std;

int solution (vector<vector<char> > A, int K) {
   // Write your code here
   int c=0, N=A.size();
   for(int i=0;i<N;i++) {
       for(int j=0;j<N;j++) {
           if(A[i][j]=='P') {
               for(int l=max(0,j-K);l<=min(j+K,N-1);l++) {
                   if(A[i][l]=='T') {
                       c++;
                       A[i][l]='D';
                       break;
                   }
               }
           }
       }
   }
   return c;
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
        int K;
        cin >> K;
        vector<vector<char> > A(N, vector<char>(N));
        for (int i_A=0; i_A<N; i_A++)
        {
        	for(int j_A=0; j_A<N; j_A++)
        	{
        		cin >> A[i_A][j_A];
        	}
        }

        int out_;
        out_ = solution(A, K);
        cout << out_;
        cout << "\n";
    }
}