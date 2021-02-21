#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n>0) {
            if(n%2==0) return myPow(x*x, n/2);
            else return x*myPow(x*x, n/2);
        }
        else {
            x=1/x;
            if(n%2==0) return myPow(x*x, -1*(n/2));
            else return x*myPow(x*x, -1*(n/2));
        }
    }
};

int main() {
    Solution obj;
    cout<<"2.100^10 = "<<obj.myPow(2.100,10);
    cout<<"\n2.000^-2 = "<<obj.myPow(2.000,-2);
}