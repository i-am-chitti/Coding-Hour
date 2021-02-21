#include <bits/stdc++.h>
using namespace std;

bool* primeGenerator(int num, bool* pno) {
    pno = new bool[num+1];
    memset(pno, true, num+1);
    for(int i=2;i*i<num;i++) {
        if(pno[i] == true) {
            for(int j=i*i; j<=num; j+=i) {
                pno[j] = false;
            }
        }
    }
    return pno;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nT, m, n, greatest=0;
    scanf("%d", &nT);
    int input[nT][2];
    for(int i=0;i<nT;i++) {
        scanf("%d", &m);
        scanf("%d", &n);
        input[i][0] = m;
        input[i][1] = n;
        if(n>greatest) greatest = n;
    }
    
    bool* pno;
    pno = primeGenerator(greatest, pno);

    for(int i=0;i<nT;i++) {
        for(int j=input[i][0]; j<=input[i][1]; j++) {
            if(pno[j]) {
                printf("%d\n", j);
            }
        }
    }

    return 0;
}