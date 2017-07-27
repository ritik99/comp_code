#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int u, w;
	cin >> u >> w;
	int arr1[5];
	int arr2[5];
	int i = 0;
	int ten = 100000;
	for(ten; ten != 0; ten = ten/10){
		arr1[i] = w/ten;
		w = w - (w/ten)*ten;
		arr2[i] = u/ten;
		u = u - (u/ten)*ten;
		i++;
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(arr1[i] == arr2[j]) cout << arr1[i] << "AYE" << endl;
		}
	}
	return 0;
}