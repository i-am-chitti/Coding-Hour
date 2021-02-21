#include<bits/stdc++.h>
using namespace std;

string solve (vector<int> A) {
   // Write your code here
   int N=A.size(),even=0,odd=0;
   for(int i=0;i<N/2;i++) {
      int digit = (int)(A[i]/(pow(10,(int)log10(A[i]))));
      cout<<digit<<endl;
      if(i%2==0) even+=digit;
      else odd+=digit;
   }
   for(int i=N/2;i<N;i++) {
      int digit = A[i]%10;
      if(i%2==0) even+=digit;
      else odd+=digit;
   }
   if((even-odd)%11==0) return "OUI";
   else return "NON";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}