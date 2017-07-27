#include<iostream>
#include<vector>
using namespace std;

int main(){
	long int a, b, n;
	cin >> a >> b >> n;
	vector<int> vec;
	long long int ans = a;

	bool flag = false;
	for(int j = 0; j < 10; j++){
		if((ans*10 + j)%b == 0){
			ans = ans*10 + j;
			flag = true;
			break;
		}
	}
	if(flag == false) cout << -1;
	else{
		cout << ans;
		for(int i = 0; i < n-1; i++){
			cout << 0;
		}
	}
	return 0;
}