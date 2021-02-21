#include<bits/stdc++.h>
using namespace std;

int trackLimit(vector<int> &transactions, long long &target) {
    long long sum=0;
    for(int i=0;i<transactions.size();i++) {
        sum+=transactions[i];
        if(sum>=target) return i+1;
    }
    return -1;
}

int main() {
	int N,Q,temp;
    long long target;
    vector<int> transactions;
    cin>>N;
    while(N--) {
        cin>>temp;
        transactions.push_back(temp);
    }
    N=transactions.size();
    cin>>Q;
    while(Q--) {
        cin>>target; //today's target
        cout<<"Output"<<trackLimit(transactions, target)<<endl;
    }
}