#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N) {
    if(N==2) return 1;
    else if(N%2==0) return 0;
    for(int i=3;i<sqrt(N);i+=2) {
        if(N%i==0) return 0;
    }
    return 1; 
}

vector<vector<int> > queue_and_stack (vector<int> A) {
   // Write your code here
    vector<int> queue,stack;
    for(int i=0;i<A.size();i++)
        if(isPrime(A[i])) queue.push_back(A[i]);
        else stack.push_back(A[i]);
    
    reverse(stack.begin(),stack.end());
    vector<vector<int> > res;
    res.push_back(queue);
    res.push_back(stack);
    return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i_A=0; i_A<n; i_A++)
    {
    	cin >> A[i_A];
    }

    vector<vector<int> > out_;
    out_ = queue_and_stack(A);
    for(int i_out_=0; i_out_<out_.size(); i_out_++)
    {
    	cout << out_[i_out_][0];
    	for(int j_out_=1; j_out_<out_[i_out_].size(); j_out_++)
    	{
    		cout << " " << out_[i_out_][j_out_];
    	}
    	cout << "\n";
    }
}