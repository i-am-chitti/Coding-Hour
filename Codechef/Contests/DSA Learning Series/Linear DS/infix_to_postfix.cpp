#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int prec(char c) {
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return -1; 
}

void solve(){
    int N;
    cin>>N;
    string str;
    cin>>str;
    stack<char> aux;
    for(int i=0;i<N;i++) {
        if(isalpha(str[i])) {
            cout<<str[i];
        }
        else {
            if(str[i]=='(') aux.push(str[i]);
            else if(str[i]==')') {
                while(!aux.empty() && aux.top()!='(') {
                    cout<<aux.top();
                    aux.pop();
                }
                aux.pop();
            }
            else if(aux.empty() || prec(str[i])>prec(aux.top())) aux.push(str[i]);
            else {
                while(!aux.empty() && prec(aux.top())>=prec(str[i])) {
                        cout<<aux.top();
                        aux.pop();
                    }
                    aux.push(str[i]);
            }

            // if(aux.empty() || inStackPrecedence(aux.top())<incomingPrecedence(str[i])) aux.push(str[i]);
            // else {
            //     if(str[i]==')') {
            //         while(!aux.empty() && aux.top()!='(') {
            //             cout<<aux.top();
            //             aux.pop();
            //         }
            //         if(aux.top()=='(') aux.pop();
            //     }
            //     else {
            //         while(!aux.empty() && inStackPrecedence(aux.top())>=incomingPrecedence(str[i])) {
            //             cout<<aux.top();
            //             aux.pop();
            //         }
            //         aux.push(str[i]);
            //     }
            // }
        }
    }
    while(!aux.empty()) {
        cout<<aux.top();
        aux.pop();
    }
    cout<<endl;
}
 

int main()
{
    //fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}