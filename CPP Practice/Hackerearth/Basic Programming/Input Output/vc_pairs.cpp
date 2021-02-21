#include<bits/stdc++.h>
using namespace std;

bool isVowel(char a) {
    switch(a) {
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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int T,N,c;
    string str;
    cin>>T;
    while(T--) {
        cin>>N;
        cin>>str;
        c=0;
        for(int i=0;i<N-1;i++) {
            if(!isVowel(str[i]) && isVowel(str[i+1])) c++;
        }
        cout<<c<<endl;
    }
}