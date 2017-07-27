#include<iostream>
#include<algorithm>
using namespace std;
int knapsack(int val[], int time[], int n, int t){
	int arr[n+1][t+1];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= t; j++){
			if(i == 0 || j == 0) arr[i][j] = 0;
			else if(time[i-1] <= j) arr[i][j] = max(val[i-1] + arr[i-1][j - time[i-1]], arr[i-1][j]);
			else arr[i][j] = arr[i-1][j];
		}
	}
	return arr[n][j];
}
int main(){
	int n;
	int t;
	cin >> t;
	cin >> n;
	int time[n];
	int val[n];
	for(int i = 0; i < n; i++){
		cin >> time[i];
	}
	for(int i = 0; i < n; i++){
		cin >> val[i];
	}
	cout << knapsack(val, time, n, t) << endl;
	return 0;
}