#include<bits/stdc++.h>
#define bigValue 1000001
using namespace std;

long long NotinRange (int* R, int* L, int n ) {
   // Write your code here
   vector<int> arr(bigValue, 0);
   for(int i=0;i<n;i++) {
       arr[L[i]]++;
       arr[R[i]+1]--;
   }
   int temp=0;
   long long sum=0;
   for(int i=1;i<bigValue;i++) {
       temp+=arr[i];
       if(temp==0) { sum+=i; cout<<i<<" ";}
   }
   cout<<endl;
   return sum;
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int L[n],R[n];
    for(int i=0; i<n; i++)
    	cin>>L[i]>>R[i];
    
    long long out_ = NotinRange(R, L, n);
    cout<<out_;
}