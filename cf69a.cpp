#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int a, b, c;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		sum1 = sum1 + a;
		sum2 = sum2 + b;
		sum3 = sum3 + c;
	}
	//cout << sum1 << " " << sum2 << " " << sum3 << endl;
	if(sum1 == 0 && sum2 == 0 && sum3 == 0) cout << "YES";
	else cout << "NO";
	return 0;
}