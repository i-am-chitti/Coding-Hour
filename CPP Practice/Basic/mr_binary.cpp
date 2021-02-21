#include<bits/stdc++.h>

using namespace std; 

void subArraySum(vector<pair<int, int>>& c, int& ans) 
{
    int one=0, zero=0; 
    for (unsigned int i = 0; i < c.size(); i++) 
    {
        zero += c[i].first;
        one += c[i].second;
    }
    if(one == zero) ans++;
} 

void subArrayCreate(vector<pair<int, int>> arr, int i, int n, 
               int& ans, vector<pair<int, int>>& c) 
{ 
    if (i == n) { 
        subArraySum(c, ans); 
        return; 
    } 
    subArrayCreate(arr, i + 1, n, ans, c); 
    c.push_back(arr[i]); 
    subArrayCreate(arr, i + 1, n, ans, c); 
    c.pop_back(); 
} 

pair<int, int> countOnesAndZeros(int num) {
    pair<int, int> oneZero;
    oneZero.first = 0;
    oneZero.second = 0;
    int rem;
    while(num>0) {
        rem = num%2;
        if(rem) oneZero.second++;
        else oneZero.first++;
        num /= 2;
    }
    return oneZero;
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int greatest=-67549;
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>greatest) greatest = arr[i];
    }

    pair<int, int> greatestPair = countOnesAndZeros(greatest);
    int greatestOnes = greatestPair.first + greatestPair.second;

    vector<pair<int, int>> array;
    pair<int, int> temp;

    for(int i=0;i<N;i++) {
        temp = countOnesAndZeros(arr[i]);
        temp.first +=greatestOnes - (temp.first+temp.second);
        array.push_back(temp);
    }

    vector<pair<int, int>> tempArr;

    int res=-1;

    subArrayCreate(array, 0, N, res, tempArr);

    vector<int> result;

    int rem,c=0;

    while(res>0) {
        rem = res%2;
        result.push_back(rem);    
        res = res/2;
        c++;
    }

    int requiredZeros = greatestPair.first + greatestPair.second - c;

    for(int i=0;i<requiredZeros;i++) {
        result.push_back(0);
    }

    reverse(result.begin(), result.end());

    for(unsigned int i=0;i<result.size();i++) {
        printf("%d", result[i]);
    }


}
