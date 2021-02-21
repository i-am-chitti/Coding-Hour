#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,maximum=INT_MIN;
    cin>>N;
    int S[N];
    map<int,int> map;
    for(int i=0;i<N;i++) {
        cin>>S[i];
        maximum=max(maximum,S[i]);
        map[S[i]]++;
    }
    int temp,Q;
    cin>>Q;
    for(int i=0;i<Q;i++) {
        cin>>temp;
        if(temp==maximum) cout<<N;
        else {
            if(map[temp]>=2) cout<<N;
            else {
                map[temp]++;
                N++;
                cout<<N;
                maximum=max(maximum,temp);
            } 
        }
        cout<<endl;
    }
    for(auto it=map.begin();it!=map.end();it++) cout<<it->first<<" ";
    for(auto it=map.rbegin();it!=map.rend();it++) {
        if(it->second>1) cout<<it->first<<" ";
    }
}