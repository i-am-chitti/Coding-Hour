#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b) {
    return a<b;
}

int main() {
    map<int,int> map;
    map.insert({3,7});
    map.insert({3,7});
    map.insert({2,5});
    map.insert({4,1});
    int i=1;
    for(auto it=map.begin();it!=map.end();it++) {
        cout<<it->first<<" "<<it->second<<" "<<i<<" "<<map[i]<<endl;
        i++;
    }
}