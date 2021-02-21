class Solution {
public:
    void permute(string S, int i, unordered_set<string> &res) {
        if(i<S.length()) {
            for(int j=i;j<S.length();j++) {
                if(isalpha(S[j])) {
                    if(isupper(S[j])) {
                        res.insert(S);
                        permute(S,j+1,res);
                        S[j]+=32;
                        res.insert(S);
                        permute(S,j+1,res);
                    }
                    else {
                        res.insert(S);
                        permute(S,j+1,res);
                        S[j]-=32;
                        res.insert(S);
                        permute(S,j+1,res);
                    }
                }
                else res.insert(S);
            }
        }
    }
    
    vector<string> letterCasePermutation(string S) {
        unordered_set<string> res;
        permute(S,0,res);
        vector<string> result;
        for(auto it=res.begin();it!=res.end();it++) result.push_back(*it);
        return result;
    }
};