class Solution {
public:
    string intToRoman(int num) {
       vector<string> roman = {"M", "D", "C", "L", "X", "V", "I"};
        vector<int> integers = {1000, 500, 100, 50, 10, 5, 1};
        vector<int> carry = {100, 100, 10, 10, 1, 1, 0};
        
        string res = "";
        int next;
        
        for (int i = 0; num; i++) {
            
            int temp = num / integers[i];
            while (temp--) res += roman[i];
            num %= integers[i];
            
            if (i == 6) return res;
            
            next = carry[i];
            if ((num - num % next) == (integers[i] - next)) {
                res += i % 2 ? roman[i+1] + roman[i] : roman[i+2] + roman[i];
                num -= integers[i] - next;
            }
            
        }
        return res;
    }
};