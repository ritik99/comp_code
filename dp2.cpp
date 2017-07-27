#include<iostream>
#include<algorithm>
using namespace std;
int func(int arr[], int array[], int n){
	int lcs[n][n] = {0};
	int i = 0;
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i] == arr[j]){
				if(i == 0 || j == 0) lcs[i][j] = 1;
				else lcs[i][j] = 1 + lcs[i-1][j-1];
			}
			else{

				if(j!=0 || i != 0) lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
			}
		}
	}
	return lcs[n-1][n-1];
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int array[n];
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	cout << func(arr, array, n);
	return 0;
}
