#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string A,B,C;
    int carry,i,j,t;
    while(cin>>A>>B) {
        C="";
        carry=0;
        for(i=A.size()-1,j=B.size()-1;i>=0 && j>=0; i--,j--) {
            t=A[i]-'0'+B[j]-'0'+carry;
            if(t>9) {
                t-=10;
                carry=1;
            }
            else carry=0;
            C.push_back(t+'0');
        }
        while(i>=0) {
            t=A[i]-'0'+carry;
            if(t>9) {
                t-=10;
                carry=1;
            }
            else carry=0;
            C.push_back(t+'0');
            i--;
        }
        while(j>=0) {
            t=B[j]-'0'+carry;
            if(t>9) {
                t-=10;
                carry=1;
            }
            else carry=0;
            C.push_back(t+'0');
            j--;
        }
        if(carry==1) C.push_back(carry+'0'); 
        reverse(C.begin(),C.end());
        cout<<C;
    }
}