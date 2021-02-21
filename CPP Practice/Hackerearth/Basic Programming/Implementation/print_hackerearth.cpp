#include<bits/stdc++.h>
using namespace std;

int howManyTimes(string str) {
    vector<int> alphabets (27,0);
    for(int i=0;i<str.size();i++) alphabets[str[i]-'a'+1]++;
    int count=INT_MAX;
    count=alphabets[1]/2<count?alphabets[1]/2:count;
    count=alphabets[3]<count?alphabets[3]:count;
    count=alphabets[5]/2<count?alphabets[5]/2:count;
    count=alphabets[8]/2<count?alphabets[8]/2:count;
    count=alphabets[11]<count?alphabets[11]:count;
    count=alphabets[18]/2<count?alphabets[18]/2:count;
    count=alphabets[20]<count?alphabets[20]:count;
    return count;
}

int main() {
    int N;
    cin>>N;
    string str;
    cin>>str;
    cout<<howManyTimes(str);
}