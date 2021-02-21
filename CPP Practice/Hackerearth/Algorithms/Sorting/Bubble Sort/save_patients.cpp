#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> vaccine(N,0);
    for(int i=0;i<N;i++) cin>>vaccine[i];
    vector<int> persons(N,0);
    for(int i=0;i<N;i++) cin>>persons[i];
    sort(vaccine.begin(),vaccine.end());
    sort(persons.begin(),persons.end());
    if(vaccine[0]>persons[0]) {
        if(vaccine[N-1]>persons[N-1]) cout<<"Yes";
        else cout<<"No";
    }
    else cout<<"No";
}