#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	//int n;
	int a = -1;
	while(a != 0){
		cin >> a;
		int size;
		bool done = false;
		while(done != true){
			int n = a;
			int base = 10000000;
			while(n/base == 0){
				base = base/10;
			}
			//cout << base << endl;
			vector<int> arr;
			int temp = n;
			while(base != 0){
				arr.push_back(temp/base);
				temp = temp - (temp/base) * base;
				base = base/10;
			}
			//cout << base << endl;
			/*for(int i = 0; i < arr.size(); i++){
				cout << arr[i] << " ";
			}*/
	
			bool flag = true;
			bool passed[arr.size()] = {false};
			int count = 0;
			/*for(int i = 0; i < arr.size(); i++){
				cout << passed[i] << " ";
			}*/
			int i = 0;
			while(flag != false && count <= arr.size()){
				if(passed[arr[i]%(arr.size()) + i] != true){
					passed[arr[i]%(arr.size())] = true;
					i = (arr[arr[i]%(arr.size()) + i]);//%(arr.size());
					count++;
				}
				else{
					flag = false;
				}
			}
			if(count <= arr.size()){
				cout << n << endl;
				done = true;
			}
			else{
				cout << false << endl;
				n++;
			}
		}
	}
	return 0;
}