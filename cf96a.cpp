#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cin >> a;
	string b = "0000000";
	string c = "1111111";
	if(a.find(b) != string::npos || a.find(c) != string::npos) cout << "YES";
	else cout << "NO";
	return 0;
}
