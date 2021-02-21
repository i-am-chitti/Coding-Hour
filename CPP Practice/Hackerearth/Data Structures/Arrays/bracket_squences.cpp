#include<bits/stdc++.h>
using namespace std;

bool isSeqBalanced(string seq) {
    int l=0,r=0;
    for(int i=0;i<seq.size();i++) {
        if(seq[i]=='(') l++;
        else r++;
    }
    return l==r;
}

int main() {
    string seq;
    cin>>seq; //input string
    if(!isSeqBalanced(seq)) cout<<"0"; // )()()()  since it is unbalanced, so directly 0
    else {
        /*
            The idea is to traverse the sequence and find the index which seperate the sequence into two parts such that first part has
            maximum number of unbalanced closing braces. That index would be used to left shift given sequence to get a balanced sequence.

            for example:- )()())((    0-based indexing
                at pos=6, if we left shift this sequence at pos=6, we would get
                --> (()()())
                now, if we calculate total number of balanced sequences in this sequence like sequences at indexes (1,2)
                (3,4),(5,6),(0,7)

        */
        int c=0,d=0,shiftPos=0; //shift pos where array has to be left shifted
        // d is to track minimum c as more less is c, more number of unbalanced closing braces would have been encountered

        for(int i=0;i<seq.size();i++) { //loop to find shiftPos
            if(seq[i]=='(') c++;
            else c--;
            if(c<d) {
                d=c;
                shiftPos=i+1;
            }
        }
        /*
            consider an array = {1,2,3,4,5,6,7}
            to left shift it at pos=2
            1. reverse from index 0 to 1 {2,1,3,4,5,6,7}
            2. reverse from index 2 to end {2,1,7,6,5,4,3}
            3. reverse complete array {3,4,5,6,7,1,2}
            Hence, in three operations each of O(n), we got array of left shifted by 2 positions
        */
        //left shifting seq to get a balanced seq
        reverse(seq.begin(),seq.begin()+shiftPos);
        reverse(seq.begin()+shiftPos,seq.end());
        reverse(seq.begin(),seq.end());
        
        /*
            Once we get a complete balanced sequence, to get the required answer we have to count total number of
            continous balanced sub sequences
        */
        int ans=0;
        c=0;
        for(int i=0;i<seq.size();i++) {
            if(seq[i]=='(') c++;
            else c--;
            if(c==0) ans++;
        }
        cout<<ans;
    }
}