#include<iostream>
using namespace std;
void swape(char *a, char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
    //cout<<*a<<*b;
}
void perm(string s, int l, int h){
    if(l==h){
        cout<<s<<endl;
    }
    else{
        for(int i=l;i<h;i++){
            swape(&s[l], &s[i]);
            perm(s, l+1, h);
            swape(&s[l], &s[i]);
        }
    }
}
int main(){
    //cout<<"Hello World";
    perm("abcd", 0, 4);
}
