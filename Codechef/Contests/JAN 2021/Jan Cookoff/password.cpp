#include<bits/stdc++.h>
using namespace std;
int main() 
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<char,int> m;
    m['%']++;
    m['&']++;
    m['?']++;
    m['@']++;
    m['#']++;
    int T,n,k;
    cin>>T;
    while(T--)
    {
        int arr[4];
        memset(arr,0,sizeof(arr));
        string inputStr;
        cin>>inputStr;
        if(inputStr.size()<10)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<inputStr.size();i++)
        {
            if(islower(inputStr[i]))
            {
                arr[0]=1;
            }
            else if(isupper(inputStr[i]))
            {
                if((i==0 or i==inputStr.size()-1) and arr[1]==0)
                {
                    flag=1;
                }
                else
                {
                    arr[1]=1;
                    flag=0;
                }
            }
            else if(isdigit(inputStr[i]))
            {
                if((i==0 or i==inputStr.size()-1) and arr[2]==0)
                {
                    flag=1;
                }
                else
                {
                    arr[2]=1;
                    flag=0;
                }
            }
            else if(m.find(inputStr[i])!=m.end())
            {
                if((i==0 or i==inputStr.size()-1) and arr[3]==0)
                {
                    flag=1;
                }
                else
                {
                    arr[3]=1;
                    flag=0;
                }
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(arr[0]==1 and arr[1]==1 and arr[2]==1 and arr[3]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}