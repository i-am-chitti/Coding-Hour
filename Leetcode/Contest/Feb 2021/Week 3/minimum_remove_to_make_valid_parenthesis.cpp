class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='(') {
                st.push(make_pair(s[i],i));
            }
            else if(s[i]==')') {
                if(!st.empty() && st.top().first=='(') st.pop();
                else st.push(make_pair(s[i],i));
            }
        }
        string res;
        for(int i=s.length()-1;i>=0;i--) {
            if(st.empty()) res.push_back(s[i]);
            else {
                if(st.top().second!=i) res.push_back(s[i]);
                else st.pop();
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};