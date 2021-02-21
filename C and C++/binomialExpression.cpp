/*
Given three integers A, X, n, the task is to print terms of below binomial expression series
(A+X)^n = nC0AnX0+nC1An-1X1+nC2An-2X2+.....+nCnA0Xn
input: 1 1 5
Output: 1 5 10 10 5 1
*/
#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==0) return 1;
    if(n%2==0) return pow(x*x, n/2);
    else return x*pow(x*x, (n-1)/2);
}
int main(){
    int a, x, n;
    cin>>a>>x>>n;
    int i,lastTerm=pow(a, n);
    for(i=1;i<=n+1;i++){
        cout<<lastTerm<<" ";
        lastTerm=(lastTerm*x*(n-i+1))/(a*i);
    }
}
