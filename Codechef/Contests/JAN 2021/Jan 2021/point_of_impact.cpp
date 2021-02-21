#include<iostream>
using namespace std; 

int main() {
    int T,N,K,x,y;
    cin>>T;
    while(T--) {
        cin>>N>>K>>x>>y;
        if(x==y) cout<<"1"<<endl;
        else {
            int rem = K%4;
            if(x>y) {
                //gonna hit right side
                y+=N-x;
                x=N;
                switch (rem)
                {
                    case 0: cout<<N-y<<" 0"<<endl;
                    break;
                    case 1: cout<<x<<" "<<y<<endl;
                    break;
                    case 2: cout<<y<<" "<<x<<endl;
                    break;
                    case 3: cout<<"0 "<<N-y<<endl;
                    break;
                }
                
            }
            else {
                //gonna hit top side
                x+=N-y;
                y=N;
                switch (rem)
                {
                    case 0: cout<<"0 "<<N-x<<endl;
                    break;
                    case 1: cout<<x<<" "<<y<<endl;
                    break;
                    case 2: cout<<y<<" "<<x<<endl;
                    break;
                    case 3: cout<<N-x<<" 0"<<endl;
                    break;
                }
                
            }
        }
    }
}