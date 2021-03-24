//Simple approach
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLen=s.length(),tLen=t.length();
        if(tLen<sLen) return 0;
        int i=0,j=0;
        while(i<sLen && j<tLen) {
            if(s[i]==t[j]) {
                i++;
                j++;
            }
            else j++;
        }
        return i==sLen;
    }
};