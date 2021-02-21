#include<bits/stdc++.h>
using namespace std;

void frequencyCount(string s) {
    unordered_map<char, int> m;
    for(int i=0;s[i];i++) {
        if(m.find(s[i]) == m.end()) {
            m.insert(make_pair(s[i], 1));
        }
        else m[s[i]]++;
    }

    for(auto& it:m) {
        cout<<it.first<<"\t"<<it.second<<endl;
    }
}

int main() 
{ 
    string str = "Deepakkumar"; 
    frequencyCount(str); 
    return 0; 
} 