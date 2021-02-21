/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/description/

1. Get first greater element on right side in array
2. Get first smaller element on right side of array
*/
#include<bits/stdc++.h>
using namespace std;

//without stack solution O(N^2)
vector<long long> solution (vector<long long> A) {
    vector<long long> res;
   // Write your code here
   int N=A.size();
   for(int i=0;i<N;i++) {
       int j,k,flag=0;
       for(j=i+1;j<N;j++) if(A[i]<A[j]) {
           flag++;
           break;
       }
       if(flag>0) {
           for(k=j+1;k<N;k++) if(A[j]>A[k]) {
               flag++;
               break;
           }
       }
       flag>1?res.push_back(A[k]):res.push_back(-1);
   }
   return res;
}

//O(N) sol with stack
vector<long long> solution2 (vector<long long> A) {
    int N=A.size();
    vector<int> smaller(N),greater(N);
    stack<int> stck;
    for(int i=N-1;i>=0;i--) {
        while(!stck.empty() && A[i]>=A[stck.top()]) stck.pop();
        if(stck.empty()) greater[i]=-1;
        else greater[i]=stck.top();
        stck.push(i);
    }
    stack<int> stc;
    for(int i=N-1;i>=0;i--) {
        while(!stc.empty() && A[stc.top()]>=A[i]) stc.pop();
        if(!stc.empty()) smaller[i]=stc.top();
        else smaller[i]=-1;
        stc.push(i); 
    }
    vector<long long> res;
    for(int i=0;i<N;i++) {
        res.push_back(A[smaller[greater[i]]]);
    }
    return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    vector<long long> out_;
    out_ = solution(A);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}