#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    vector<int> points(N,0);
    vector<string> restaurant(N,"");
    for(int i=0;i<N;i++) {
        cin>>restaurant[i]>>points[i];
    }
    vector<int> maxIndices;
    int max=INT_MIN;
    for(int i=0;i<N;i++) {
        if(points[i]>max) max=points[i];
    }
    for(int i=0;i<N;i++) {
        if(max==points[i]) maxIndices.push_back(i);
    }
    string res=restaurant[maxIndices[0]];
    for(int i=1;i<maxIndices.size();i++) {
        if(restaurant[maxIndices[i]]<res) res=restaurant[maxIndices[i]];
    }
    cout<<res;
}