/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

void WRITE(stack<char>& Undo,
           char X)
{
    Undo.push(X);
}

void UNDO(stack<char>& Undo,
          stack<char>& Redo)
{
    char X = Undo.top();
    Undo.pop();
    Redo.push(X);
}

void REDO(stack<char>& Undo,
          stack<char>& Redo)
{
    char X = Redo.top();
    Redo.pop();
    Undo.push(X);
}
 
void READ(stack<char> Undo)
{
    stack<char> revOrder;
    while (!Undo.empty()) {
        revOrder.push(Undo.top());
        Undo.pop();
    }
 
    while (!revOrder.empty()) {
        cout << revOrder.top();
        Undo.push(revOrder.top());
        revOrder.pop();
    }
 
    cout << " ";
}

void QUERY(vector<string> Q)
{
    stack<char> Undo;
    stack<char> Redo;
    int N = Q.size();
    for (int i = 0; i < N; i++) {
        if (Q[i] == "UNDO") {
            UNDO(Undo, Redo);
        }
        else if (Q[i] == "REDO") {
            REDO(Undo, Redo);
        }
        else if (Q[i] == "READ") {
            READ(Undo);
        }
        else {
            WRITE(Undo, Q[i][6]);
        }
    }
}

void solve(){
    vector<string> Q = { "WRITE A", "WRITE B",
                         "WRITE C", "UNDO",
                         "READ", "REDO", "READ" };
    QUERY(Q);
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}