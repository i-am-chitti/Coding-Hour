#include<bits/stdc++.h>
using namespace std;

int main() {
    char arr[]="aabeleijlkms";
    int a=0,x=0;
    for(int i=0;arr[i]!='\0';i++) {
        x=1;
        x=x<<arr[i]-97;
        if(a&x) {
            cout<<arr[i]<<"\t";
        }
        else {
            a=a|x;
        }
    }
}