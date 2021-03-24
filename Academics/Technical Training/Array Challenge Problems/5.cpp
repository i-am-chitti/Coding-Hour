/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

vector<string> recur(string s, vector<string>& wordDict, int begin) {
    vector<string> arrStr;
    if(begin>=s.length()) return arrStr;
    for(int i=0;i<wordDict.size();i++) {
        string aux;
        for(int j=0,k=begin;j<wordDict[i].length() && k<s.length() && wordDict[i][j]==s[k];j++,k++)
            aux.push_back(s[k]);
        if(aux.length()==wordDict[i].length()) {
            arrStr.push_back(aux);
        } 
    }
    vector<string> res;
    for(int i=0;i<arrStr.size();i++) {
        vector<string> tempArr = recur(s,wordDict,begin+arrStr[i].length());
        if(tempArr.size()>0) {
            for(int j=0;j<tempArr.size();j++) {
                res.push_back(arrStr[i]+" "+tempArr[j]);
            }
        }
        else res.push_back(arrStr[i]);
    }
    return res;
}

bool isCorrect(string &s, int N) {
    int n=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]!=' ') n++;
    }
    return n==N;
}

vector<string> wordBreak(string s, vector<string>& wordDict) {
    vector<string> res = recur(s,wordDict,0);
    int N=s.length();
    auto it=res.begin();
    while(it!=res.end()) {
        if(!isCorrect(*it,N)) {
            res.erase(it);
        }
        else it++;
    }
    return res;
} 

void solve(){
    string s;
    vector<string> wordDict;
    s="catsanddog";
    wordDict={"cat","cats","and","sand","dog"};
    vector<string> res = wordBreak(s,wordDict);
    for(int i=0;i<res.size();i++) cout<<res[i]<<"\n";
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}