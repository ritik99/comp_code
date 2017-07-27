#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int n = 3000;
	cin >> n;
	long long int arr[n];
	vector<pair<int , int> > v;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		int j = i;
		for(int t = i;  t < n; t++){
			if(arr[j] > arr[t]){
				j = t;
			}
		}
		if(i != j){
			v.push_back(make_pair(i, j));
			swap(arr[i], arr[j]);
			count++;
		}
	}
	cout << count << endl;
	for(vector<pair<int, int> >::iterator it = v.begin(); it != v.end(); it++){
		cout << (*it).first << " " << it->second << endl;
	}

	/*for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}*/
	return 0;
}