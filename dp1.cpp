#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int hello(int powe[], int count[], int n, int d, int i, int arr[]){
	if(i == 0){
		for(int j = 0; j < n; j++){
			arr[0] = arr[0] + powe[j]*count[j];
		}
		return hello(powe, count, n, d, i+1, arr);
	}
	else if(i == d) return arr[d-1];
	else if(arr[i] != 0) return arr[i];
	else{
		arr[i] = arr[i-1];
		int temp = 0;
		int place = 0;
		for(int j = 0; j < n-1; j++){
			temp = count[j] + count[j+1];
			if(temp*powe[j+1] > arr[i]){
				arr[i] = temp*powe[j+1];
				place = j;
			}
		}
		count[place] = 0;
		return hello(powe, count, n, d, i+1, arr);
	}
}
				
			
int main(){
	int n;
	cin >> n;
	int powe[n];
	int count[n];
	for(int i = 0; i < n; i++){
		cin >> powe[i];
	}
	for(int i = 0; i < n; i++){
		cin >> count[i];
	}
	int d = 10;
	cin >> d;
	int arr[d] = {0};
	int i = 0;
	cout << hello(powe, count, n, d, i, ans);
	return 0;
}
