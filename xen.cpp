#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long int u, v;
		cin >> u >> v;
		unsigned long long int k = u + v;
		unsigned long long int ans = (k*(k+1))/2;
		unsigned long long int x = 0;
		ans = ans + u + 1;
		cout << ans << endl;
	}
	return 0;
}