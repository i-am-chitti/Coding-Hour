#include<iostream>
using namespace std;

int basicGCD(int a, int b) {
    if(a==0) return b;
    return basicGCD(b%a, a);
}

int advGCD(int a, int b, int &x, int &y) {
    if(a==0) {
        x=0;
        y=1;
        return b;
    }
    int x1, y1;
    int d = advGCD(b%a, a, x1, y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}

int main() {
    cout<<"GCD = "<<basicGCD(12,30);
    int x, y;
    cout<<endl<<"GCD = "<<advGCD(15,35,x,y);
}