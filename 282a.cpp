#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ans = 0;
	while(n--){
		string var;
		cin >> var;
		if(var == "X++" || var == "++X")
			ans++;
		else
			ans--;
		}
	cout << ans;
	return 0;
}

		
