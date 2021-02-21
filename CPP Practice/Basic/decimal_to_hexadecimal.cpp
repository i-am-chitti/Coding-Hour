#include<bits/stdc++.h>
using namespace std;

string convert(int N) {
    vector<char> res;
    while(N>0) {
        int rem = N%16;
        switch(rem) {
            case 10: res.push_back('A');
            break;
            case 11: res.push_back('B');
            break;
            case 12: res.push_back('C');
            break;
            case 13: res.push_back('D');
            break;
            case 14: res.push_back('E');
            break;
            case 15: res.push_back('F');
            break;
            default:
                res.push_back(rem+'0');
        }
        N/=16;
    }
    string hex;
    for(int i=res.size()-1;i>=0;i--) hex.push_back(res[i]);
    return hex;
}

int main() {
    int N;
    cin>>N;
    cout<<convert(N);
}