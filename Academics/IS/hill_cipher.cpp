#include <bits/stdc++.h> 
using namespace std; 

void getKeyMatrix(string key, vector<vector<int>> &kArr) 
{ 
    int k = 0; 
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++,k++)
            kArr[i][j] = (key[k]) % 65;
} 

void encrypt(vector<vector<int>> &cArr, vector<vector<int>> &kArr, vector<vector<int>> &mArr) { 
    int x, i, j; 
    for (i = 0; i < 3; i++)  
    { 
        for (j = 0; j < 1; j++) 
        { 
            cArr[i][j] = 0; 
           
             for (x = 0; x < 3; x++) 
            { 
                cArr[i][j] +=  
                     kArr[i][x] * mArr[x][j]; 
            } 
          
            cArr[i][j] = cArr[i][j] % 26; 
        } 
    } 
} 

void HillCipher(string message, string key) 
{ 
    vector<vector<int>> kArr(3,vector<int>(3));
    getKeyMatrix(key, kArr); 
  
    vector<vector<int>> mArr(3,vector<int>(3));
  
    for (int i = 0; i < 3; i++) 
        mArr[i][0] = (message[i]) % 65; 
  
    vector<vector<int>> cArr(3,vector<int>(3));
    
    encrypt(cArr, kArr, mArr); 
  
    string CipherText; 
    for (int i = 0; i < 3; i++) 
        CipherText += cArr[i][0] + 65; 
    cout<<message<<" -> "<<CipherText; 
} 
  
int main() 
{ 
    string message = "HELLO"; 
  
    string key = "GYBNQKURP"; 
  
    HillCipher(message, key); 
  
    return 0; 
} 