#include<iostream>
#include<vector>
using namespace std;

int main() {
    int T,N;
    int K,D,d,rem;
    cin>>T;
    while(T--) {
        cin>>N>>K>>D;
        vector<int> A(N);
        for(int i=0;i<N;i++) {
            cin>>A[i];
        }
        long long totalQuestions = 0;
        for(int i=0;i<N;i++) {
            totalQuestions+=A[i];
        }
        int d = totalQuestions/K;
        cout<<"Output: ";
        if(d>D) cout<<D<<endl;
        else cout<<d<<endl;
    }
}