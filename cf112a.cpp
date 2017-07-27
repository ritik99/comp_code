#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string a;
	string b;
	cin >> a;
	cin >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	vector<string> var;
	var.push_back(a);
	var.push_back(b);
	sort(var.begin(), var.end());
	if(a == b) cout << 0;
	else if(var[0] == a) cout << -1;
	else if(var[0] == b) cout << 1;
	return 0;
}
