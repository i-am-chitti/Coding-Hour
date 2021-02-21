#include<iostream>
using namespace std;

bool checkPalindrome(string strg){
    cout<<strg<<endl;
    int i=0,j=strg.size()-1;
    bool flag=true;
    while(i<j){
        if(strg[i]!=strg[j]) { flag=false; break;}
        i++;
        j--;
    }
    cout<<flag<<endl;
    return flag;
}

string str="";
int palindromicPathCount=0;
void paths(string *arr, int n, int m){
    if(n==2 && m==3) {
        str.push_back(arr[n][m]);
        //check for palindrome
        bool res = checkPalindrome(str);
        if(res) palindromicPathCount++;
        str.erase(str.end()-1);
    }
    else{
        if(n<2 && m<3) {
            str.push_back(arr[n][m]);
            paths(arr, n+1, m+1);
            str.erase(str.end()-1);
        }
        if(n<2) {
            str.push_back(arr[n][m]);
            paths(arr, n+1, m);
            str.erase(str.end()-1);
        }
        if(m<3) {
            str.push_back(arr[n][m]);
            paths(arr, n, m+1);
            str.erase(str.end()-1);
        }
    }
}

int main(){
    //char arr[3][4]={{'a','a','a','b'},{'b','a','a','a'},{'a','b','b','a'}};
    string arr[] ={"aaba", "baaa", "abba"};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    paths(arr, 0, 0);
    cout<<palindromicPathCount;
}
