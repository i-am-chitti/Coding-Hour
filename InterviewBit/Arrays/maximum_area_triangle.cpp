#include<bits/stdc++.h>
using namespace std;

vector<int> getOccurences(vector<string> &A, char color, int column) {
    vector<int> occurences;
    int lastOccurence=-1;
    for(int i=0;i<A.size();i++) {
        if(A[i][column]==color) {
            if(lastOccurence==-1) occurences.push_back(i);
            lastOccurence=i;
        }
    }
    occurences.push_back(lastOccurence);
    return occurences;
}

int solve(vector<string> &A) {
    vector<vector<vector<int>>> metaData;
    int N=A.size(),M=A[0].size();
    for(int i=0;i<M;i++) {
        vector<vector<int>> colorOccurence;
        colorOccurence.push_back(getOccurences(A,'r',i));
        colorOccurence.push_back(getOccurences(A,'g',i));
        colorOccurence.push_back(getOccurences(A,'b',i));
        metaData.push_back(colorOccurence);
    }
    int maxArea=0;
    for(int i=0;i<M;i++) {
    }
}


int main() {
    vector<string> A;
    //A={"rrbrggggrbbbbrbrbbggrbbrbrbggrbggrbrbgbrbbrgbgrbbrbbbggggbbr", "ggbbgbgbggbbrgrbgggrggrbggggbbbbrrrgbgbggbbrgbrbrbbbrgbrrrbg", "bbbrgrbgbgrbbrgbbbbgbbbbgbrbrrrggbbrgggbrrbrrrrbrbbrbrgrbrgb", "brbrbrbrbrbbbrrgggrrrgrbgbrrbrggrgggrrrrbbbggbrbbrbrgrbbbgrb", "rrbbbgrgggggbbbbbgrbgbrrrggrgrbgbbrbrbgrrbrbrggbrgbbgbrrrbrr", "rgrrgrbgbgbrbbrbbrbgbgrggbrrgbrgrgrbgbbbgrgbbrggbrgrrrggggbg", "rgrgbbgbrgrbbgrgbggbgggrggrrgggbbgrbgbggggrgrrbgrrrgrggrgrrg", "rbbgggrbrbbrbrbgrrgggggrgbggrbggrgrggrbrrrgggbrgrgbgrgbbrggr", "grgrrrgbgbrbggggbgrgbggbrrgrggrggrrbrgbrrbbrgrgggggrrbrgrggg", "gbrgbbbbbbggrbrgbgbggbgrbgrggbbrgbbgbrbggrggrbgbgbrrgrrgbrbb", "gbbgbrrggrgrgrrrbggrbrgrrgrgrrrgbgbbbgbbbrggbbgbrrrgbrggggrb", "rbgbrgbgrrrgrrrrgbbbbgbrgrrbgbrrbbgbbbbbggggbrgrbbggbggrrbbr", "gbgbrrggbggbgbrrrrrbgbgbrrbbbbbrbgbbrrgrbrrbbrggbbggggbrgrbb", "bgrrgggrbgrggrrgggbrbbrggrgggbbrbbrrbrbgrgbgbbrrgbrbrrbrbgbr", "brbgbrgggrrbrrgbgbrgrrbrggggrgbbggrrgrrggrggbbrgggrbggggbrgb", "rrgrgbgbrrggbrrbrgrgrrbbggrgbgrbrgbgggrgrbrbggrgbrgbbgggbrbr", "rrbbbgrgrrggbrbbbbrbbrrbrgrgbgrgrbbgbbrrgbgbrgrbggbbrrrgrbgg", "brrrrbggrbgbbrbbggbbbbgrrbgggrrrbrrbrrbgbgbbggbbrrgrbgbbbbgb", "bbgrrgbgbrrbrbgrrbrbbrrgrbggbrgrrbbggbrbgrgbbrbrgrbgggrbrrbb", "rgrggrrrrrgbbbgbgbrggbrbrbrrbbgrgbgbgrrrrgrbggbgrgbrrbbbrrrr", "rrrrrgbgbrbrggrbrbrgrbbrrbgggbrbrrgrgbrgrrbggrgbrgrbrggrrgrr", "bgggrgrrrrbbggbrgbgggggrrbbgrggrbrbbbbgggbbrrbrbrbbrgggbbrgb", "rrrgrggrrrrrrgrbgbgrrrbbrrrrbrbggrrrggbgbbbgbrrrrrrbbrrrgggr", "rrbrbrrgbggbbbbrbgrgbggrrrgrrrbbrbgrrgbrbrbbbbbbggbbbbrrbggb", "ggrrbrbrgbrbgbrbrggrgbgrrbgbrrrggbrbrggbbgggbbggrgrggbrgrrgr", "gbggbrrbrrrggbgrbgrggggggbbbrgbgrbbbgbbrbggbbgrbgbrrgbbrgrgr", "gbggrrgbbbrrgggrrbgrbrggbrbrbrbgggbrgrbrgbbrbbgbbgbbbbggbgrr", "gbrbrgbrgrbbrrrrbrgbbrbrrrrrrgggrgrrgbrbbgrrrbrggbgbrggrbbgr", "rbrgbggbgrbrgbgrrbbrbrbgggbggrbgbbggggbbgrgbrgrgrrgrrrrbbgrb", "grgbrgbbbbbbbbgggbbrrgbgbbbrbbrbrbrrrrbgbrgbgrbrggrbrrrrbggg", "grggrbrbbbbgrgggbrbggggrrrbbbrgbrgggrgbrgbbgggrgbgbrbrbgbrbg", "grrbggbgbbgbggbrbrgbgbggrbbbrggbbgggrrbrgrgrggbgrgrrbbgrrgrg", "rrrggbbbggbgbrrbgrrbggrggbgbbggrgrgbggrbrggrrbgrgrbbggbgggbr", "brrgggrgbrggrbbrgrrrggbrrrbbrgbgggrgbrbgbbrbbbrbggrrggggrgrb", "grbbbbrrgggrrbrgrbgrgbggbgrgbgrrbgrrbrgrrgbbgrbgbbgrgbggggbr", "rrrbrgrgbrbrbrbggbbrrrgrrbrrgrgbrrbbggrgrrrrrgrbrgbggggrrrrb", "bbbrbbrbbrgbgrgbrbbbrggrbrgggbgrbbgrrrbbbgbgrrbbrrrbgrbgrgrr", "bbggbgbrbbgggbggrgggbrbbggbrrrbrgbrgbgggbrrbbbgrrbgrgbgbbggb", "gbbgbbrrggrrrbgrgrrbrbggggrbrgbbgbbbbggrrrbggbbrggbggrrrgbbr", "gbbrrgbbbrbggbbrgrbbggbbrbgrrgggrgbbrrrbrggbgbggrrrrbbrbrrgg", "bbbbrbgbgbbbrbgggbbbbrgrbbbbrrbbbgbrrgrgggrggbbbbbbgbrbrgbbb", "bgrrbrgbgggbbrggggrgbbgbrgbrgrgbgbrbbbbgrrbrbbbrbbgbrrggrrgb", "rbrggbgbggrrbrgrgrrrbgbgrgrrgbbbbbbgrrrbgrrrbbbgrrrrggbrrbrg", "gbgrrbgbrggrbgrgrbgbbbbrrgrbbbgrrgrgggrrbrbbggbbbbggggrrbggg", "bbrbrgrgrbgrbbgbrrgbggbbbbrrbgrrbrbgrggrgrrbrbgbrggbrgbrbgbr", "brrbggbrrrbggrbgrgrbrbrrbrgbgrbbrgbrrbgrbbbrrrgbbggbggrgbrbb", "rbgbgrrgbrbbgggggbrggrbrbrggbrrrbbbbrgbbrbgbgrrrgrbrgrbgrrrb", "bbbbggrbgrrrggggbrrrbrgrrrbbrrrgrgbrbrrrgrrbrrrgbrgbgggrbrbr", "ggbbbrbrbbrbrrbbbgrrrbgbbbgbggbgbgbrrbbbbgbbbgbgrrrrbggrbbrr", "gggrbbrgbgggrggrbrrbbggrrrrrbbrbggrbrbrgbgbbggbrrbgrgrrbbrgb", "grgbbrggbggrgbbbbgbgbgbbrggggbbgbgggbbrgggbggbrbrgrrbgbgbgrr", "rrgrgbggbrgrgbggbgbggrbgggrgrbbbbrrbrgrrrbrggbrgbbgrrgbbgrrg", "brggrbgbgrrbggbgbgrrbgrgrbrbbgbgrgbrbgrgbrbggrrgrbbrbrrrrgrr", "brrrrrrbgggbrbggrggbrgbbgrbbgrggbbggbgrgbgrrbbgggrbbrbrrbrgg", "brggggggrrrgbbggrrggrgrrgrggrrrggrbbgrbgrbbgggrbbbgrgbggbgbr", "rbbbbgrrggrgbrbbbbrbrgrgrrrbbggbgggggrbrrbgbbrrbgrgrbgbgrrrg", "ggrrbgbgbbgrgggbrrrrbgrbbgrrgrgbgbgbrbrrbgbgrbbgbbbgbbgbbbrb", "rrrbrgrrrgrrbbrgbbbrrgrbggrgrrbbbrbrrggrgbrgrrgrbrrrbrbrggrb", "rggrrbbrrggrrgbrbgrgrbbbbgrrgbgbbrbgggrgrrbbbrrbgbrggggbbbgr", "bgrbbbrbgbbbgbbgbbgggbrrbbbrbrbrrgggrggbbrbgrrbbrggrrggbgbrg", "grgbgrbbbgrbbgbgbbrrbrbgggbgbbrrrbbgbgbrbbgrrbrbbrgggrbbbgrb", "rbrbrbbbrrbgrrrrbbgbgbbgbrrrrbgrgrgbrbbbbrrrgggrrrrgrrgbrggr", "bbbrgbbgrrrrgbbgrrgrrbgrggrrbrggbgrggrrbrbbbgbbggbgrbrggbggg", "rbgbggrrbbgrgbrgggbbbbbggbgbrgggrrrrbrggrrggbbggbggrgggbgbbb", "rbgrrbrggrbbggrbrbgbrbrrrrbbrgrrbgrrrrbgbrgrrrrbrrrgbgrgrggr", "bgbgrrrrrbrrrbbgrbbbbrbrgrgbbggbrrgbbrggbggbrgbrgrrrbbrggggg", "gbggggrrrrrbbrgrrbrrbbrrgggbgbrrrbrbgbrrrrbrrrbbbrrgbbrrbrbr", "grgggbgbrgbrbbggbrbrgbrgbgrrgbgbrbrgrgrgrbggrggbgrbgbbrggrgb", "rgbgbbbbbbgggrgbbgbbrgrgrggggrbbgggrbbrgbrgrrrrbgbrrrrbgrggr", "grrgbrrbrbbrggbrggggrgrgbbbbggrrbrbrbbrggrbgrggrggbgrbgrggbb", "gbggbrgbrggbrrgggbrrgbrrbgggbgggrgrbgbrgbgrrbrrgrrgrrbrbrrrg", "rrbrrbrggggrbrrgbggrrggrrbgrbrgrgbgbbbrrrbrbgrrbrbgrbrrgbgrb", "ggrrrgbrgrrrrrgbbgbbgbbbrrggbggrrbgbrgrrgrbrrrgggrbrbgbgrgbr", "rrrrgggggrgbbggrgbbbgrgbrrggbrrgrbgbgggrrrrbbgggrrgrrrbrgrgg", "grrrbbrbgggbggbgbgbrgrggrrgbrbbgbbgbrggrrrbrbbbrbrgbrbrrbbbr", "rrrrbbrgbgrrgbgrbgggrrbbbbgrbrbbrrbgbgbrbgrgrrbbgrrgrbrgbbrg", "gbbgbgbrgbrgrgbrbggrgrbrrgrrbggbbbrgbbggbbgbrbbbrbbrbrbgrgrb", "ggbgbbggbgrgrrbgbbgbrrgrgrgbrrgrbgrgbrrgbrrgrgbbbrbggbbbgbgb", "brggbgbggrbgrggrgrbbrgbgrrgrrrgbbrrrgrbrgbbbbggbbrgbrgggbggr", "ggrbbrgbgrgggrrbrgbgbbbrgrrbgrgrrgbbbbrrgbbbrrggggggbgbbbggb", "ggggggggbbrrbgbgbgbbgrbbggrgrrgrgggbrrrggbrrgrrrbgrbggrrbrbg", "bbgrbrbgbrgrrbrbbbrrggrgrbbrgbrbrrbbgrbbbbggrbrgbrrrbbrgrrbr", "rgrrbbbrbgggrrbbbbrrgrgbbrgbggrggbbbrbgbbgbrggbbgrrbgrbbrrrr"};
    A={"rrrrr", "rrrrg", "rrrrr", "bbbbb"};
    cout<<solve(A);
}