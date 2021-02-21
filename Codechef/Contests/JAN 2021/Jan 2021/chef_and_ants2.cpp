#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printArr(vector<ll> arr) {
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<"\t";
    cout<<endl;
}

ll singleLineCollisions(vector<vector<ll>> &antsPos) {
    ll nCollisions=0;
    for(int i=0;i<antsPos.size();i++) {
       ll pos=0,neg=0;
       for(int j=0;j<antsPos[i].size();j++) antsPos[i][j]>=0?pos++:neg++; 
       nCollisions+=pos*neg;
    }
    return nCollisions;
}

ll atOriginCollision(map<int,vector<int>> &map) {
    ll nCollision=0;
    for(auto it=map.begin();it!=map.end();it++) {
        if(it->second[2]>1) nCollision++;
    }
    return nCollision;
}

void printMap(map<int,vector<int>> map) {
    cout<<"Pos\tpI\tnI\tcount"<<endl;
    for(auto it=map.begin();it!=map.end();it++) {
        cout<<it->first<<"\t"<<it->second[0]<<"\t"<<it->second[1]<<"\t"<<it->second[2]<<endl;
    }
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        map<int,vector<int>> uniqueAnts;
        vector<vector<ll>> antsPos;
        ll M,nCollisions=0;
        for(int j=0;j<N;j++) {
            //j = line number
            cin>>M;
            vector<ll> ants(M);
            ll pos=0,neg=0;
            for(int i=0;i<M;i++) {
                //ants[i]= ant position
                cin>>ants[i];
                auto it=uniqueAnts.find(abs(ants[i]));
                if(ants[i]>=0) {
                    pos++;
                    if(it==uniqueAnts.end()) {
                        vector<int> arr;
                        arr = {j,-1,1};
                        uniqueAnts.insert(pair<int,vector<int>>(ants[i],arr));
                    }
                    else {
                        if(it->second[0]!=-1 && it->second[0]!=j && it->second[1]!=j) it->second[2]++; 
                        else if(it->second[0]==-1 && it->second[1]!=j) {
                            it->second[0]=j;
                            it->second[2]++;
                        }
                    }
                }
                else {
                    neg++;
                    if(it==uniqueAnts.end()) {
                        vector<int> arr;
                        arr = {-1,j,1};
                        uniqueAnts.insert(pair<int,vector<int>>(abs(ants[i]),arr));
                    }
                    else {
                        if(it->second[1]!=-1 && it->second[0]!=j && it->second[1]!=j) it->second[2]++;
                        else if(it->second[1]==-1 && it->second[0]!=j) {
                            it->second[1]=j;  
                            it->second[2]++;
                        }
                    }
                }
            }
            nCollisions+=pos*neg;
            antsPos.push_back(ants);
        }
        printMap(uniqueAnts);
        cout<<nCollisions+atOriginCollision(uniqueAnts)<<endl;
        //cout<<nCollisions<<endl;
        //cout<<atOriginCollision(uniqueAnts)<<endl;
    }
}