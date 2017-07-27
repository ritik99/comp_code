#include<iostream>

using namespace std;

int main(){
	int arr[10000];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i]+i+1 > n){
			cout << i+1;
			break;
		}
	}
	return 0;
}