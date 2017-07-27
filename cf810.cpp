#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int marks[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin >> marks[i];
		sum = sum + marks[i];
	}
	float avg = ((float)sum)/n;
	int val = round(avg);
	if(val == k) cout << 0;
	else{
		int ans = (int)((k*n) - (0.5*n) - avg);
		cout << ans;
	}
	return 0;
}
