#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    long long total_weight=0;
    for(int i=0;i<str.size();i++) {
        total_weight+=str[i]-'a'+1;
    }
    cout<<total_weight;
}