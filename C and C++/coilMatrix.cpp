#include<iostream>
using namespace std;

int main(){
    cout<<"Enter order of matrix: ";
    int n;
    cin>>n;
    int num=8*n*n+2*n;
    cout<<num<<" ";
    int order=4*n;
    int i,j,times=2,var1=4*n, var2=1;
    while(times<order)
    {
        for(i=1;times<order && i<=times;i++)
            { num-=var1; cout<<num<<" "; }
        for(i=1;times<order && i<=times;i++)
            { num+=var2; cout<<num<<" "; }

        times+=2;

        for(i=1;i<order && i<=times;i++)
            { num+=var1; cout<<num<<" "; }
        for(i=1;i<order && i<=times;i++)
            { num-=var2; cout<<num<<" "; }
    }
}
