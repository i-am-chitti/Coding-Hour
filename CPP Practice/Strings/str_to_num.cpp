#include<bits/stdc++.h>
using namespace std;

int convert1(string str) {
    //using stringstream class or sscanf
    stringstream ss(str);
    int n=0;
    ss>>n;
    return n;
}

int convert2(string str) {
    // using stoi
    return stoi(str);
}

int main() {
    string str;
    cin>>str;
    cout<<convert1(str);
    cout<<endl<<convert2(str);
}