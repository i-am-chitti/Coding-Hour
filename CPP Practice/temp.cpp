#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

string encrypt(string text, int s) 
{ 
	string result = "";
	for (int i=0;i<text.length();i++) 
	{ 
		if (isupper(text[i])) 
			result += char(int(text[i]+s-65)%26 +65); 
        else
		    result += char(int(text[i]+s-97)%26 +97); 
	}
	return result; 
}

string decrypt(string text, int s) 
{ 
	string result = ""; 
	for (int i=0;i<text.length();i++) 
	{
		if (isupper(text[i])) 
			result += char(int(text[i]-s-65)%26 +65); 
	    else
		    result += char(int(text[i]-s-97)%26 +97); 
	} 

	return result; 
} 

void solve(){
    int choice,shift;
    string s;
    cin>>choice>>s>>shift;
    if(choice) cout<<encrypt(s,shift);
    else cout<<decrypt(s,shift);
    cout<<endl;
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}