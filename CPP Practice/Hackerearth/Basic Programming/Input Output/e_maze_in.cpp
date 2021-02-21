#include<bits/stdc++.h>
using namespace std;

int main() {
    int x=0,y=0;
	string command;
    cin>>command;
    for(int i=0;i<command.size();i++) {
        switch(command[i]) {
            case 'L': x--;
            break;
            case 'R': x++;
            break;
            case 'U': y++;
            break;
            case 'D': y--;
            break;
        }
    }
    cout<<x<<" "<<y;
}