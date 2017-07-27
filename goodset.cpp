#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		if(n == 1) cout << 1 << endl;
		else if(n == 2) cout << 1 << " " << 2 << endl;
		else{
			int arr[n];
			arr[0] = 1;
			arr[1] = 2;
			//n = n - 1;
			int c = 2;
			vector<int> list = {1,2};
			for(c = 2; c < n; c++){
				for(int j = 0; j < c; j++){
					/*if(find(list.begin(), list.end(), arr[j] + arr[i-1]) != list.end())*/ list.push_back(arr[j] + arr[c-1]);
				}
				int temp = arr[c-1] + 1;
				bool flag = false;
				while(flag == false){
					if(find(list.begin(), list.end(), temp) == list.end()){
						 cout << temp << " ";
						 arr[c-1] = temp;
						 list.push_back(temp);
						 flag = true;
					}
					else temp++;
				}
				//c++;
			}
			cout << 1 << " " << 2 << endl;
			for(int i = 0; i  < (int)list.size(); i++) cout << list[i] << endl;
		}

	}
	return 0;
}