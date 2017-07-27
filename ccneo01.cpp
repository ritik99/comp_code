#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long int n = 0;
		cin >> n;
		long int sum = 0;
		long int arr[1000];
		vector<long int> neg;
		for(long int i = 0; i < n; i++){
			cin >> arr[i];
			//cout << arr << endl;
			sum += arr[i];
		}
		for(int i = 0; i < n; i++){
			if(arr[i] < 0) neg.push_back(arr[i]);
		}
		/*for(int i = 0; i < neg.size(); i++){
			cout << neg[i] << " ";
		}*/
		//cout << endl;
		vector<int> indi;
		int i = 0;
		int size = n;
		sort(neg.begin(), neg.end());
		while(sum < 0 && i < neg.size()){
			sum = sum - neg[i];
			indi.push_back(neg[i]);
			i++;
			size--;
		}
		//cout << sum << endl;
		long long int ans = sum*size;
		/*for(int o = 0; o < indi.size(); o++){
			cout << indi[o] << " ";
		}
		cout << endl;*/
		for(int k = 0; k < indi.size(); k++){
			ans = ans + indi[k];
		}
		cout << ans << endl;
	}
	return 0;
}