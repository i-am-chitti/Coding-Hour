#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> set;
    set.insert(20);
    set.insert(30);
    set.insert(40);
    set.insert(40);
    if(set.count(50)) cout<<"ASdf";
    else cout<<"asfg";
    for(auto it=set.begin();it!=set.end();it++) {
        cout<<*it<<endl;
    }
}