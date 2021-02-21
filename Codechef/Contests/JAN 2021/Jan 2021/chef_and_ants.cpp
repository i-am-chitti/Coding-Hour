#include<bits/stdc++.h>
using namespace std;

void printArr(vector<double> arr) {
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<"\t";
    cout<<endl;
}

int countCollisions(vector<double> &antsPos) {
    sort(antsPos.begin(),antsPos.end(),greater<int>());
    printArr(antsPos);
    vector<int> antsDir(antsPos.size());
    int nAnts=antsPos.size();
    //initializing direction array of ants
    for(int i=0;i<antsPos.size();i++) {
        antsDir[i]=antsPos[i]>0?1:-1;
    }

    int nCollisions=0;
    
    //check initial state of ants
    //printArr(antsPos);
    //printArr(antsDir);
    while(true) {
        //finding which ants are gonna collide
        int minDistance=INT_MAX;
        for(int i=0;i<nAnts-1;i++) {
            if(antsDir[i]==1 && antsDir[i+1]==-1) {
                //may collide
                int distance=abs(antsPos[i]-antsPos[i+1]);
                if(distance<minDistance) minDistance=distance;
            }
        }
        if(minDistance!=INT_MAX) {
            //updating ants position by minDistance/2
            for(int i=0;i<nAnts-1;i++) {
                if(antsDir[i]==1 && antsDir[i+1]==-1) {
                    printArr(antsPos);
                    //update directions of ants
                    antsPos[i]-=(double)minDistance/2;
                    antsPos[i+1]+=(double)minDistance/2;
                    swap(antsDir[i],antsDir[i+1]);
                    i++;
                    nCollisions++;
                }
                else if(antsDir[i]==1) antsPos[i]-=(double)minDistance/2;
                else antsPos[i]+=(double)minDistance/2;
            }
        }
        else break;
    }
    return nCollisions;
}

//for N==1
int countCollisions2(vector<double> arr) {
    int pos=0,neg=0;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]>=0) pos++;
        else neg++;
    }
    return pos*neg;
}

int main() {
    // int T;
    // cin>>T;
    // while(T--) {
    //     int N;
    //     cin>>N;
    //     vector<vector<double>> antsPos;
    //     int M;
    //     for(int j=0;j<N;j++) {
    //         cin>>M;
    //         vector<double> ants(M);
    //         for(int i=0;i<M;i++) cin>>ants[i];
    //         antsPos.push_back(ants);
    //     }
    //     if(N==1) {
    //         cout<<countCollisions(antsPos[0])<<endl;
    //     }
    // }
    vector<double> antsPos;
    antsPos={6,2,3,-1,-8,-5,-7};
    cout<<countCollisions(antsPos);
}