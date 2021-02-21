#include<bits/stdc++.h>
using namespace std;

int main() {
    double balance;
    int wAmount;
    cin>>wAmount>>balance;
    if(wAmount%5==0 && (double)wAmount+0.5<=balance) balance=balance-(double)wAmount-0.5;
    printf("%.2f",balance);
}