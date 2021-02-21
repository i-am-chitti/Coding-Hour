class Solution {
public:
    
    int getInteger(char c) {
        switch(c) {
                case 'I': return 1;
                break;
                case 'V': return 5;
                break;
                case 'X': return 10;
                break;
                case 'L': return 50;
                break;
                case 'C': return 100;
                break;
                case 'D': return 500;
                break;
                case 'M': return 1000;
                break;
        }
        return 0;
    }
    
    int romanToInt(string s) {
        int i=0;
        int number=0;
        int N=s.length();
        while(i<N) {
            if(s[i]=='I') {
                if(i<N-1 && (s[i+1]=='V' || s[i+1]=='X')) {
                    number+=getInteger(s[i+1])-getInteger(s[i]);
                    i++;
                }
                else number+=getInteger(s[i]);
            }
            else if(s[i]=='X') {
                if(i<N-1 && (s[i+1]=='L' || s[i+1]=='C')) {
                    number+=getInteger(s[i+1])-getInteger(s[i]);
                    i++;
                }
                else number+=getInteger(s[i]);
            }
            else if(s[i]=='C') {
                if(i<N-1 && (s[i+1]=='D' || s[i+1]=='M')) {
                    number+=getInteger(s[i+1])-getInteger(s[i]);
                    i++;
                }
                else number+=getInteger(s[i]);
            }
            else number+=getInteger(s[i]);
            i++;
        }
        return number;
    }
};