#include<bits/stdc++.h>
using namespace std;

vector<string> convertIntoSubstrings(string input) {
    vector<string> substrings;
    for(int k=1;k<=input.size();k++) {
        string temp="";
        for(int i=0;i<k;i++) {
            temp.push_back(input[i]);
        }
        if(find(substrings.begin(), substrings.end(), temp) == substrings.end()) substrings.push_back(temp);
        for(int i=k;i<input.size();i++) {
            temp.erase(temp.begin());
            temp.push_back(input[i]);
            if(find(substrings.begin(), substrings.end(), temp) == substrings.end()) substrings.push_back(temp);
        }
    }
    return substrings;
}

int main() {
    string s;
    cin>>s;
    vector<string> substrings = convertIntoSubstrings(s);
    for(int i=0;i<substrings.size();i++) cout<<substrings[i]<<endl;
}