#include<bits/stdc++.h>
using namespace std;

void multiply(vector<int> &vec, int N) {
    int carry=0;
    for(int i=0;i<vec.size();i++) {
        int num=vec[i]*N+carry;
        vec[i]=num%10;
        carry=num/10;
    }
    while(carry>0) {
        vec.push_back(carry%10);
        carry/=10;
    }
}

void solve(int N) {
    vector<int> vec;
    int num=N-1;
    while(N>0) {
        vec.push_back(N%10);
        N/=10;
    }
    while(num>1) {
        multiply(vec,num);
        num--;
    }
    string res;
    for(auto it=vec.rbegin();it!=vec.rend();it++) {
        res.push_back(*it+'0');
    }
    cout<<res;
    cout<<endl;
}   

int main() {
    int N,T;
    cin>>T;
    while(T--) {
        cin>>N;
        solve(N);
    }
}