#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.

long long int convertIntoBinary(long long int n) {
    if(n==0) return 0;
    else return n%2+10*convertIntoBinary(n/2);
}


void getInitialValues(vector<long long int> &arr) {
    for(int i=1;i<=5000;i++) {
        arr.push_back(9*convertIntoBinary(i));
    }
}

long long int solve(int n) {
    vector<long long int> arr;
    getInitialValues(arr);
    for(unsigned int i=0;i<arr.size();i++) {
        if(arr[i]%n==0) return arr[i];
    }
    return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long long int result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
