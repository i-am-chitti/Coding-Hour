#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,SH,SM,EH,EM;
    cin>>N;
    while(N--) {
        cin>>SH>>SM>>EH>>EM;
        if(EM-SM<0) cout<<EH-SH-1<<" "<<EM-SM+60<<endl;
        else cout<<EH-SH<<" "<<EM-SM<<endl;
    }
}