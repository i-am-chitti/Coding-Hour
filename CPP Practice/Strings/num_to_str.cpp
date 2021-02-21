#include<bits/stdc++.h>
using namespace std;

string convert1(int num) {
    //using string streams
    ostringstream os;
    os<<num;
    return os.str();
}

string convert2(int num) {
    return to_string(num);
}

int main() {
    int num;
    cin>>num;
    cout<<convert1(num);
    cout<<endl<<convert2(num);
    cout<<endl<<to_string(123.98);
}