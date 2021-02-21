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
    int shift;
    string s;
    cin>>s>>shift;
	string en=encrypt(s,shift), de=decrypt(en,shift);
	cout<<s<<" -> "<<en;
	cout<<endl;
    cout<<de<<" <- "<<en;
    cout<<endl;
}
 

int main()
{
	cout<<"Input Format: no of test cases\nFor each test case: String Shift\n";
    fast_cin();
	ll T;
	cin>>T;
	while(T--)
        solve();
    return 0;
}