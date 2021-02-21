#include<bits/stdc++.h>
using namespace std;

vector<int> calculateWeight(string message) {
    stringstream ss;
    ss << message;
    string word;
    int temp;
    vector<int> dates;
    while(!ss.eof()) {
        ss >> word;
        if(stringstream(word) >> temp) dates.push_back(temp);
        word = "";
    }
    return dates;
}

int main() {
    int N;
    cin>>N;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    string message="";
    vector<string> messages;
    for(int i=0;i<N;i++) {
        getline(cin,message);
        messages.push_back(message);
    }
    
    vector<int> hashT (31,0);
    for(int i=0;i<N;i++) {
        //extracting integers from each message
        vector<int> weights = calculateWeight(messages[i]);
        for(int j=0;j<weights.size();j++) {
            if(messages[i][0]=='G') hashT[weights[j]]+=2;
            else hashT[weights[j]]++;
        }
    }
    cout<<endl;
    for(int i=0;i<hashT.size();i++) {
        cout<<hashT[i]<<"\t";
    }
    cout<<endl;
    bool isDate=true;
    for(int i=1;i<31;i++) {
        if(i==19 || i==20) continue;
        else {
            if(hashT[19]<hashT[i]) {
                if(hashT[20]<hashT[i]) {
                    cout<<"No Date";
                    isDate=false;
                    break;
                }
            }
        }
    }
    if(isDate) cout<<"Date";
}