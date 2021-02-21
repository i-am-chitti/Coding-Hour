#include<bits/stdc++.h>
using namespace std;

int main() {
    multimap<int,int> mp;
    mp.insert({1,3});
    mp.insert({2,4});
    mp.insert({8,9});
    mp.insert({2,7});
    mp.insert({2,9});
    mp.insert({5,3});
    auto it=mp.equal_range(2);
    for(auto itr=it.first;itr!=it.second;itr++) {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}