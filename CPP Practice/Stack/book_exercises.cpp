#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    stack<pair<long long,string>> main;
    stack<long long> aux;
    while(N--) {
        long long n;
        cin>>n;
        if(n!=-1) {
            string bookName;
            cin>>bookName;
            if(n!=0) {
                main.push({n,bookName});
                if(aux.empty()) aux.push(n);
                else {
                    if(n<aux.top()) aux.push(n);
                    else aux.push(aux.top());
                }
            }
        }
        else {
            long long count=0;
            while(!main.empty() && main.top().first!=aux.top()) {
                count++;
                main.pop();
                aux.pop();
            }
            if(!main.empty()) {
                cout<<count<<" "<<main.top().second<<endl;
                main.pop();
                aux.pop();
            }
        }
    }
}