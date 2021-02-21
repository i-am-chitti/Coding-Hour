#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

string plain="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%*";
string cipher="klmnopqrstuvwxyzabcdefghijMNOPQRSTUVWXYZABCDEFGHIJKL7890123456%*@#$";

string encrypt(string s)
{
    string res="";
    for(int i=0;i<s.size();i++)
    {
        int index=plain.find(s[i]);
        res+=cipher[index];
    }
    return res;
}
string decrypt(string en)
{
    string res="";
    for(int i=0;i<en.size();i++)
    {
        int index=cipher.find(en[i]);
        res+=plain[index];
    }
    return res;
} 

void solve(){
    int choice;
    string s;
    cin>>choice>>s;
    if(choice==1) cout<<s<<" -> "<<encrypt(s);
    else cout<<s<<" <- "<<decrypt(s);
    cout<<endl;
}
 

int main()
{
    cout<<"Input Format: No of test cases\nFor each test case, 2 space separated input, one integer and other string: Choice string\nChoice 1. Encrypt\t2. Decrypt\n";
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}