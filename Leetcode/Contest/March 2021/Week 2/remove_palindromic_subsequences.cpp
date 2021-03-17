class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j) {
            if(s[i]!=s[j]) return 0;
            i++;
            j--;
        }
        return 1;
    }
    int removePalindromeSub(string s) {
        if(s.length()==0) return 0;
        if(isPalindrome(s)) return 1;
        else return 2;
    }
};