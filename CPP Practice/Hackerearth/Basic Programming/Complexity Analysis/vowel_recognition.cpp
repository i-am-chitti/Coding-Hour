#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    switch(c) {
        case 'a': return 1;
        break;
        case 'e': return 1;
        break;
        case 'i': return 1;
        break;
        case 'o': return 1;
        break;
        case 'u': return 1;
        break;
        default: return 0;
    }
}

long long solve(string str) {
    long long L=str.size(), count=0;
    for(long long i=0;i<L;i++) {
        if(isVowel(str[i])) count+=(L-i)*(i+1);
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T;
    string inputStr;
    cin>>T;
    while(T--) {
        cin>>inputStr;
        transform(inputStr.begin(), inputStr.end(), inputStr.begin(), ::tolower);
        cout<<solve(inputStr)<<endl;
    }
}