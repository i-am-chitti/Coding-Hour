#include<iostream>
using namespace std;

int incomingPriority(char c) {
    if(c == '+' || c == '-') {
        return 1;
    }
    else if(c == '*' || c == '/') {
        return 3;
    }
    else if(c == '^') {
        return 6;
    }
    else if(c == '(') {
        return 7;
    }
    else if(c == ')') {
        return 0;
    }
}

int inStackPriority(char c) {
    if(c == '+' || c == '-') {
        return 2;
    }
    else if(c == '*' || c == '/') {
        return 4;
    }
    else if(c == '^') {
        return 5;
    }
    else if(c == '(') {
        return 0;
    }
    else if(c == ')') {
        return -1;
    }
}

int main() {
    string input;
    cin>>input;
    for(int i=0; i<input.size(); i++) {
        
    }
}