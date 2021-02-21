#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int Heights[N];
    for(int i=0;i<N;i++) cin>>Heights[i];
    stack<int> stck;
    stck.push(Heights[N-1]);
    int maxStamina=Heights[N-1];
    int lastXOR=Heights[N-1];
    for(int i=N-2;i>=0;i--) {
        if(!stck.empty() && Heights[i]<stck.top()) {
            lastXOR=Heights[i]^lastXOR;
        }
        else if(!stck.empty() && Heights[i]>=stck.top()) {
            while(!stck.empty()) stck.pop();
            lastXOR=Heights[i];
        }
        else if(stck.empty()) lastXOR=Heights[i];
        maxStamina=max(maxStamina,lastXOR);
        stck.push(Heights[i]);
    }
    cout<<maxStamina;
}