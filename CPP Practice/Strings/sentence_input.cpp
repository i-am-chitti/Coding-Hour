#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; //no of sentences
    cin>>N;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');   //flush cin before using getline else, getline will skip first input
    string s;
    getline(cin, s);
    //cin>>s; //takes only one word
    cout<<s;
}