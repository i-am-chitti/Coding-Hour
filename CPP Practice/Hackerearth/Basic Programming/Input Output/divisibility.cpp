/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

#include <iostream>

using namespace std;

int main() {

    int N = 0;
    cin>>N;
    
    long data[N];
    for(auto i=0; i<N; i++)
        cin>>data[i];
    
    
    // write your code here
    // ans = 

    if(data[N-1]%10==0) cout<<"Yes";
    else cout<<"No";
        
    return 0;
}