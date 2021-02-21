#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

void printArr(int arr[]) {
    for(int i=0;i<16;i++) cout<<i<<" "<<arr[i]<<"\t";
    cout<<endl;
}

void andOrGame(int A[], int B[], int N, int M, int i, int j, int V, int* result, string from,int &nCalls) {
    cout<<endl<<from<<" - "<<i<<" "<<j<<" "<<V<<" "<<nCalls<<endl;
    printArr(result);
    if(i<N) {
        int oR=V|A[i];
        if(result[oR]==-1) {
            result[oR]++;
            andOrGame(A,B,N,M,i+1,j,V|A[i],result,"or",++nCalls);
        }
    }
    if(j<M) {
        int anD=V&B[j];
        if(result[anD]==-1) {
            result[anD]++;
            andOrGame(A,B,N,M,i,j+1,V&B[j],result,"and",++nCalls);
        }
    }
    if(i<N || j<M) {
        andOrGame(A,B,N,M,i+1,j+1,V,result,"middle",++nCalls);
        //if(i<N && j>=M) andOrGame(A,B,N,M,i+1,j,V,result,"iMiddle",++nCalls);
        //else if(i>=N && j<M) andOrGame(A,B,N,M,i,j+1,V,result,"jMiddle",++nCalls);
        //else andOrGame(A,B,N,M,i+1,j+1,V,result,"middle",++nCalls);
    }
    return;

}

int main() {
    int T,N,M;
    cin>>T;
    while(T--) {
        cin>>N>>M;
        int A[N],B[M],maxA=-1,maxB=-1;
        for(int i=0;i<N;i++) {
            cin>>A[i];
            if(A[i]>maxA) maxA=A[i];
        }
        for(int i=0;i<M;i++) {
            cin>>B[i];
            if(B[i]>maxB) maxB=B[i];
        }
        sort(A,A+N);
        sort(B,B+M);
        int num=(maxA|maxB)+1;
        int result[num];
        memset(result,-1,sizeof(result));
        int nCalls=0;
        andOrGame(A,B,N,M,0,0,0,result,"base",nCalls);
        
        int count=0;
        for(int i=0;i<num;i++) {
            if(result[i]>-1) count++;
        }
        cout<<"No of calls: "<<nCalls<<" Output: "<<count;
        cout<<endl;
    }
}