#include<iostream>
using namespace std;

int pathCount=0;
void path(int n, int m){
    if(n==0 && m==0){
        pathCount++;
    }
    else{
        if(n>0 && m>0) path(n-1, m-1); //for diagonal paths
        if(n>0) path(n-1, m); //for horizontal paths
        if(m>0) path(n, m-1);  //for vertical paths
    }
}

int main(){
    cout<<"Enter coordinates: ";
    int n,m;
    cin>>n>>m;
    path(n,m);
    cout<<pathCount;
}
