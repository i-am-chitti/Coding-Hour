#include<bits/stdc++.h>
using namespace std;

void countName(string str) {
    int x=0,y=0;
    for(int i=0;i<str.size();i++) {
        if(str[i]=='S') {
            string s;
            s.push_back(str[i]);
            int j;
            for(j=i+1;j<str.size() && j-i<4;j++) s.push_back(str[j]);
            if(s=="SUVO") {
                int k=j;
                for(k=j;k<str.size() && k-j<3;k++) s.push_back(str[k]);
                if(s=="SUVOJIT") {
                    y++;
                    i=k-1;
                }
                else {
                    x++;
                    i=j-1;
                }
            }
        }
    }
    cout<<"SUVO = "<<x<<", "<<"SUVOJIT = "<<y<<endl;
}

int main() {
    int N;
    cin>>N;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    while(N--) {
        string str="";
        getline(cin, str);
        countName(str);
    }
    return 0;
}