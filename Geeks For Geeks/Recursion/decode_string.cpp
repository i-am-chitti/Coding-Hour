// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<int> intSt;
        stack<char> charSt;
        string res;
        for(int i=0;i<s.length();i++) {
            if(isalpha(s[i])) charSt.push(s[i]);
            else if(isdigit(s[i])) {
                int count=0;
                while(isdigit(s[i])) {
                    count=count*10+s[i]-'0';
                    i++;
                }
                i--;
                intSt.push(count);
            }
            else if(s[i]=='[') charSt.push(s[i]);
            else {
                string temp="";
                while(!charSt.empty() && charSt.top()!='[') {
                    temp+=charSt.top();
                    charSt.pop();
                }
                charSt.pop();
                bool isStackEmpty=0;
                reverse(temp.begin(),temp.end());
                int n=intSt.top();
                string temp2="";
                intSt.pop();
                for(int j=0;j<n;j++) temp2+=temp;
                for(int j=0;j<temp2.length();j++) charSt.push(temp2[j]);
            }
        }
        while(!charSt.empty()) {
            res.push_back(charSt.top());
            charSt.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends