/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
bool checkConversion(string A, string B) {
    int N=A.size();
    vector<int> aux(4,0);
    queue<int> auxIndex;
    auxIndex.push(0);
    for(int i=0;i<N;i++) {
        if(A[i]=='0') aux[0]++;
        else aux[1]++;
        if(aux[0]==aux[1]) {
            auxIndex.push(i);
            auxIndex.push(i+1);
        }
        if(B[i]=='0') aux[2]++;
        else aux[3]++;
    }
    if(aux[0]!=aux[2] || aux[1]!=aux[3]) return 0;
    while(auxIndex.size()!=1) {
        int left=auxIndex.front();
        auxIndex.pop();
        int right=auxIndex.front();
        auxIndex.pop();
        //cout<<left<<" "<<right<<"\n";
        string tempA=A.substr(left,right-left+1),tempB=B.substr(left,right-left+1);
        //cout<<tempA<<" "<<tempB<<"\n";
        if(tempA.compare(tempB)!=0) {
            //cout<<"going to flip\n";
            // check after flipping
            for(int i=0;i<tempA.length();i++) {
                if(tempA[i]=='0') tempA[i]='1';
                else tempA[i]='0';
            }
            //cout<<"After flipping "<<tempA<<"\n";
            if(tempA!=tempB) return 0;
        }
    }
    int last=auxIndex.front();
    auxIndex.pop();
    if(last==N) return 1;
    else {
        // not ended
        while(last<N) {
            if(A[last]!=B[last]) return 0;
            last++;
        }
        return 1;
    }
}

void solve(){
    int N;
    cin>>N;
    string A,B;
    cin>>A>>B;
    if(checkConversion(A,B)) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
    //checkConversion(A,B);
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}