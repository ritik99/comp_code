#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int degree;
		cin >> degree;
		unsigned long long int arr[degree+1];
		for(int i = 0; i < degree+1; i++){
			cin >> arr[i];
		}
		int d, k;
		cin >> d;
		cin >> k;
		vector<unsigned long long int> list;
		unsigned long long int temp = 0;
		unsigned long long int c = 1;
		while(temp < k){
			temp = temp + c * d;
			c++;
		}
		c = c - 1;
		unsigned long long int ans = 0;
		for(int i = 0; i < degree+1; i++){
			ans = ans + arr[i]*(unsigned long long int)(pow(c, i));
		}
		cout << ans << endl;

	}
	return 0;
}