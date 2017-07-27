#include<iostream>
#include<vector>
using namespace std;

int main(){
	char arr[50];
	int n, t;
	char temp;
	vector<int> vec;
	cin >> n >> t;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int time = 0;
	while(time<t){
		for(int i = 0; i < n-1; i++){
			if(arr[i] == 'B' && arr[i+1] == 'G'){
				vec.push_back(i);
			}
		}
		for(int i = 0; i < vec.size(); i++){
			arr[vec[i]] = 'G';
			arr[vec[i]+1] = 'B';
		}
		time++;
	}
	for(int i = 0; i < n; i++){
		cout << arr[i];
	}
	return 0;
}