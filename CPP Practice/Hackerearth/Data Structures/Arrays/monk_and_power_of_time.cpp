#include<bits/stdc++.h>
using namespace std;

int main() {
    long long time=0;
    int N,t;
    cin>>N;
    vector<int> callingOrder(N,0);
    vector<int> idealOrder(N,0);
    for(int i=0;i<N;i++) cin>>callingOrder[i];
    for(int i=0;i<N;i++) cin>>idealOrder[i];

    while(!callingOrder.empty()) {
        if(callingOrder[0]!=idealOrder[0]) {
            t=callingOrder[0];
            callingOrder.erase(callingOrder.begin());
            callingOrder.push_back(t);
            time++;
        }
        else {
            callingOrder.erase(callingOrder.begin());
            idealOrder.erase(idealOrder.begin());
            time++;
        }
    }
    cout<<time;

}